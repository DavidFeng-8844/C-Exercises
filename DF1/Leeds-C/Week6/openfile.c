#include <stdio.h> 
int main (){
    FILE *input = fopen("inputfile.txt","r");
    FILE *output = fopen("outputfile.txt","w");
    fclose(output);
    output = fopen("outputfile.txt","a");
    fprintf(output, "hello world by david\n");
    fprintf(output, "This is a appended line\n");
   /* if(input == NULL && output == NULL) {
        printf("error opening file\n");
        return 2;
    }*/
    fclose(input);
    fclose(output);
}