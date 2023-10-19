#include <stdio.h> 
int main (){
    FILE *input = fopen("inputfile.txt","r");
    FILE *output = fopen("outputfile.txt","w");
    fprintf(output, "hello world\n");
   /* if(input == NULL && output == NULL) {
        printf("error opening file\n");
        return 2;
    }*/
    fclose(input);
    fclose(output);
}