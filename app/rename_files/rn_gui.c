#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <gtk/gtk.h>

void renameFilesInFolder(const char *folderPath);

static void button_clicked(GtkWidget *widget, gpointer data) {
    GtkWidget *dialog;
    GtkFileChooserAction action = GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER;
    gint res;

    dialog = gtk_file_chooser_dialog_new("Select a Folder",
                                         GTK_WINDOW(gtk_widget_get_toplevel(widget)),
                                         action,
                                         "_Cancel",
                                         GTK_RESPONSE_CANCEL,
                                         "_Open",
                                         GTK_RESPONSE_ACCEPT,
                                         NULL);

    res = gtk_dialog_run(GTK_DIALOG(dialog));
    if (res == GTK_RESPONSE_ACCEPT) {
        char *folderPath = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
        renameFilesInFolder(folderPath);
        g_free(folderPath);

        GtkWidget *infoDialog;
        infoDialog = gtk_message_dialog_new(NULL, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Files and folders renamed successfully.");
        gtk_dialog_run(GTK_DIALOG(infoDialog));
        gtk_widget_destroy(infoDialog);
    }

    gtk_widget_destroy(dialog);
}

int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "File Renamer");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a button
    GtkWidget *button = gtk_button_new_with_label("Select Folder");
    g_signal_connect(button, "clicked", G_CALLBACK(button_clicked), NULL);

    // Create a vertical box layout
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 0);

    // Set the main window content
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Show all widgets
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}

void renameFilesInFolder(const char *folderPath) {
    DIR *dir;
    struct dirent *entry;

    // Open the directory
    if ((dir = opendir(folderPath)) == NULL) {
        perror("Error opening directory");
        exit(EXIT_FAILURE);
    }

    // Read each entry in the directory
    while ((entry = readdir(dir)) != NULL) {
        // Skip "." and ".." entries
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // Construct the full path of the file or subfolder
        char fullPath[256];
        sprintf(fullPath, "%s/%s", folderPath, entry->d_name);

        // If the entry is a subfolder, recursively rename its contents
        if (entry->d_type == DT_DIR) {
            renameFilesInFolder(fullPath);
        }

        // Replace spaces with underscores in the file or folder name
        size_t len = strlen(entry->d_name);
        char *newName = (char *)malloc((len + 1) * sizeof(char));

        for (size_t i = 0; i < len; i++) {
            if (entry->d_name[i] == ' ') {
                newName[i] = '_';
            } else {
                newName[i] = entry->d_name[i];
            }
        }

        newName[len] = '\0';

        // Construct the new full path of the file or folder
        char newFullPath[256];
        sprintf(newFullPath, "%s/%s", folderPath, newName);

        // Rename the file or folder
        if (rename(fullPath, newFullPath) != 0) {
            perror("Error renaming file or folder");
            exit(EXIT_FAILURE);
        }

        // Free the allocated memory
        free(newName);
    }

    // Close the directory
    closedir(dir);
}
