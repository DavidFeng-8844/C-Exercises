#include <stdio.h> 
int main (){
    FILE *input = fopen("inputfile.txt","r");
    FILE *output = fopen("outputfile.txt","w");
    fclose(output);
    output = fopen("outputfile.txt","a");
    fprintf(output, "hello world by david\t");
    fprintf(output, "This is a appended line\n");
   /* if(input == NULL && output == NULL) {
        printf("error opening file\n");
        return 2;
    }*/
    fclose(output);
    output = fopen("outputfile.txt", "r");
    char iptstr[100];
    char optstr[100];
    fgets(iptstr, 100, input);
    fgets(optstr, 100, output);
    printf("The input string is: %s\n", iptstr);
    printf("The output string is: %s\n", optstr);
    fclose(input);
    fclose(output);
}