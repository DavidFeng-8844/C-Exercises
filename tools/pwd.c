#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char *lalpha;
    char *ualpha;
    char *numbers;
    char *symbols;
} pwd_t;

char *pwd_gntr(int length, pwd_t pwd);

int main(int argc, char *argv[]) {
    srand((unsigned int)time(NULL));  // Seed the random number generator

    pwd_t pwd;
    pwd.lalpha = "abcdefghijklmnopqrstuvwxyz";
    pwd.ualpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    pwd.numbers = "0123456789";
    pwd.symbols = "!@#$^&*()_+-=";

    // Generate a random password
    int length = 8;
    char *my_pwd = pwd_gntr(length, pwd);
    puts(my_pwd);

    free(my_pwd);  // Free the allocated memory
    return 0;
}

char *pwd_gntr(int length, pwd_t pwd) {
    char *my_pwd = (char *)malloc((length + 1) * sizeof(char));  // Allocate memory for the password
    if (my_pwd == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; i++) {
        if (i < 2) {
            my_pwd[i] = pwd.lalpha[rand() % strlen(pwd.lalpha)];
        } else if (i < 4) {
            my_pwd[i] = pwd.ualpha[rand() % strlen(pwd.ualpha)];
        } else if (i < 6) {
            my_pwd[i] = pwd.numbers[rand() % strlen(pwd.numbers)];
        } else if (i < 8) {
            my_pwd[i] = pwd.symbols[rand() % strlen(pwd.symbols)];
        }
    }

    my_pwd[length] = '\0';  // Null-terminate the string
    printf("%s\n", my_pwd);
    return my_pwd;
}
