#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

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

        // Construct the full path of the file
        char oldPath[256];
        sprintf(oldPath, "%s/%s", folderPath, entry->d_name);

        // Replace spaces with underscores in the file name
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

        // Construct the new full path of the file
        char newPath[256];
        sprintf(newPath, "%s/%s", folderPath, newName);

        // Rename the file
        if (rename(oldPath, newPath) != 0) {
            perror("Error renaming file");
            exit(EXIT_FAILURE);
        }

        // Free the allocated memory
        free(newName);
    }

    // Close the directory
    closedir(dir);
}

int main() {
    const char *folderPath = "rn_tst/"; // Replace with your folder path

    renameFilesInFolder(folderPath);

    printf("Files renamed successfully.\n");

    return 0;
}
