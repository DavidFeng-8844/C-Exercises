#include <stdio.h>
#include <string.h>

int countAsterisks(const char *str) {
    int count = 0;
    while (*str) {
        if (*str == '*') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char inputString[100]; // Assuming a maximum input of 99 characters
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the trailing newline character from the input
    inputString[strcspn(inputString, "\n")] = '\0';

    int asteriskCount = countAsterisks(inputString);

    printf("Number of asterisks: %d\n", asteriskCount);
    return 0;
}

/******************************/
/*Version2*/
/*#include <stdio.h>
#include <string.h>

int countAsterisks(const char *str) {
    int count = 0;
    while (*str) {
        if (*str == '*') {
            count++;
        }
        str++;
    }
    return count;
}

void getInput(char *inputString, int maxLength) {
    printf("Enter a string: ");
    fgets(inputString, maxLength, stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the trailing newline character
}

void displayResult(int asteriskCount) {
    printf("Number of asterisks: %d\n", asteriskCount);
}

int main() {
    char inputString[100]; // Assuming a maximum input of 99 characters
    int asteriskCount;

    getInput(inputString, sizeof(inputString));
    asteriskCount = countAsterisks(inputString);
    displayResult(asteriskCount);

    return 0;
}
*/
/******************************/