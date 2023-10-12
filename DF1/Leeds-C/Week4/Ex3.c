#include <stdio.h>

int main() {
    int numLines;
    char alphabet[26] ="abcdefghijklmnopqrstuvwxyz";
 
    //printf("%c",char[0]);
    printf("Enter the number of lines: ");
    scanf("%d", &numLines);

    // Outer loop for lines
    for (int i = 1; i <= numLines; i++) {
        // Inner loop for spaces before asterisks
        for (int j = 1; j <= numLines - i; j++) {
            printf("  "); // Print two spaces for alignment
        }

        // Inner loop for asterisks
        for (int k = 1; k <= i; k++) {
            printf("*   "); // Print an asterisk and three spaces
        }

        printf("\n"); // Move to the next line
        
    }
    for (int a = 1; a <= numLines; a++){
        for(int b = 1; b <= numLines - a ; b++){//print the spaces
            printf("  ");
        }
        for(int c = 1; c <= a; c++){
            printf("%c   ", alphabet[c - 1]);
            //printf("%c   ", 'a' + c - 1);   
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
/*
    int a;
    int count = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    //printf("number:%d",a);
    for(char b = '*'; count < a; count++){
        for(int i = 0; i < a - count - 1; i++){
        printf(" ");
        }
        for(int i = 0; i < count + 1; i++){
            printf("%c\t", b);
        }
        printf("\n");
    }*/