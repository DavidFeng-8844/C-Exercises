#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade;
    printf("Enter Your Grade: ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'A':
            printf("you did great\n");
            break;
        case 'B':
            printf("soso\n");
            break;
        case 'C':
            printf("you suck\n");
            break;

        default:
            printf("error\n");
            break;
    }

    return 0;
}