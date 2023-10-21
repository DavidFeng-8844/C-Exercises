#include <stdio.h>
#include <string.h>

int main(void) {
    char inName[64], outName[64];
    FILE *in;
    FILE *out;
    char c;
    int d;

    // Get file names from the user
    printf("Enter name of the file to be copied: ");
    scanf("%63s", inName);
    printf("Enter name of the output file: ");
    scanf("%63s", outName);
    printf("Please Enter character you want to input: ");
    scanf(" %c", &c);

    // Open input and output files
    in = fopen(inName, "w");
    out = fopen(outName, "wb"); // Open the output file in binary mode

    if (in == NULL || out == NULL) {
        printf("Failed to open input or output file.\n");
        return 1;
    }

    // Put character into the input file
    putc(c, in);
    fclose(in);

    in = fopen(inName, "r");

    if (in == NULL) {
        printf("Failed to reopen the input file for reading.\n");
        return 1;
    }

    // Read character from input file
    d = getc(in);
    fclose(in);

    // Put the character into the output file
    putc(d, out);
    fclose(out);

    out = fopen(outName, "rb"); // Open the output file in binary mode for reading

    if (out == NULL) {
        printf("Failed to reopen the output file for reading.\n");
        return 1;
    }

    // Read character from the output file
    d = getc(out);
    fclose(out);

    // Display the character
    printf("The output character is %c\n", d);

    return 0;
}
