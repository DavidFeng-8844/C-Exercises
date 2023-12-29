#include <stdio.h> 
#include <string.h>
#include <ctype.h>
#define WRD 50
char * wrd_chr(char * arr);

int main(){
    puts("Enter your words(without the spaces and tabs)");
    char arr[WRD];
    wrd_chr(arr);
    fputs(arr, stdout);
    return 0;
}

char * wrd_chr(char * arr){
    int ch;
    int i;
    // skip over initial whitespace
    while ((ch = getchar()) != EOF && isspace(ch))
        continue;
    if (ch == EOF)
        return NULL;
    else{
        arr[0] = ch;
        for(i = 1; i < WRD; i++){
            ch = getchar();
            if(ch != EOF && ch != '\0' && ch != '\t' && ch != '\n' && ch != ' '){
                arr[i] = ch;
            }else{
                break;
            }
            break;
        }
    }

}