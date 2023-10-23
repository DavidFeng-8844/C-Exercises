#include <stdio.h>
#include <string.h>
#define STRNG_LEN 0
#define STR_CP_LEN 0
#define STR_CMP 1
int main(){
    
    char str[100];
    char *p = str;
    int i = 0;

    #if STRNG_LEN
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

    #endif
    #if STR_CP_LEN
    char cp_str[50];
    strncpy(cp_str, str, 50);
    printf("The copied string is: %s", cp_str);
    #endif

    #if STR_CMP 
    printf("Enter a apple product that you can afford: ");
    gets(str);
    if(strncmp(str, "iPhone", 6) == 0){
        printf("You are rich\n");
    }
    else{
        printf("You are poor\n");
    }
    if(strcmp(str, "iPhone") < 0){
        printf("The ASCII code of the input is smaller");
    }
    else if(strcmp(str, "iPhone") > 0){
        printf("The ASCII code of the input is larger");
    }
    
    #endif



    return 0;
}