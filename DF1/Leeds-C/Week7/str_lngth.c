#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char *p = str;
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0'){
        i++;
    }
    while(*p != '\0'){
        p++;
    }
    printf("The length of the string is %d caclulated by the first way", p - str);
    printf("\nThe length of the string is %d caclulated by the second way\n", i);
    printf("The String is %s", str);
    printf("\u2764\uFE0F\n");
    char cp_str[50];
    strncpy(cp_str, str, 50);
    printf("The copied string is: %s", cp_str);
    return 0;
}