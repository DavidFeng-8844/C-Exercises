#include <stdio.h>
#include <string.h> 
int main() { 
    char s[] = "Apple ";
    char p[] = "Juice";
    printf("The address of the first string before alterd is: %ox\n", &s);
    strcat(s, p);
    printf("The concatenated strings: %s\n", s);
    printf("The address of the first string after alterd is: %ox\n", &s);
    int n = 0;
    for(int i = 0; s[i] != ' '; i++){
        n = i;
    }
    printf("The volume ot the string after modification is: %i", n);
    return 0;
}