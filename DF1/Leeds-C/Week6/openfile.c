#include <stdio.h> 
int main (){
    FILE *input = fopen("inputfile.txt","w");
    fprintf(input,"suka");
    fclose(input);
    input = fopen("inputfile.txt","r");
    FILE *output = fopen("outputfile.txt","w");
    fclose(output);
    output = fopen("outputfile.txt","a");
    fprintf(output, "hello world by david\n");
    fprintf(output, "This is a appended line\n");
    fclose(output);
    output = fopen("outputfile.txt", "r");
    char iptstr[100];
    char optstr[100];
    while(fgets(optstr, 100, output))
    {
        printf("%s\n", optstr);    
    }
    fgets(iptstr, 100, input);
    if(iptstr != NULL){
        printf("%s\n", iptstr);
    }else{
        printf("Input file is empty");
    }
    fclose(input);
    fclose(output);
    FILE *nullfile = fopen("NULL.txt", "r");
    if(nullfile == NULL){
        printf("The file doesn't exists");
    }
}