#include <stdio.h> 
#include <string.h>
#define STLEN 100

void ftch_arr(int n, char * arr);
char * getnchars(char * arr, int n);

int main(){
    char * heart = " \u2764\uFE0F  ";
    char carr[STLEN];
    char arr[STLEN];
    printf("Please input your name:\n");
    if(getnchars(carr, STLEN - 1)){
        printf("Please input the person that you love:\n");
        if(getnchars(arr, STLEN - 1)){
            strcat(carr, heart);
            strcat(carr, arr);
            printf("I think %s", carr);
        }else{
            puts("Invalid Input 2");
        }
    }else{
        puts("Invalid Input");
    }    
}

void ftch_arr(int n, char * arr){
    fgets(arr, STLEN, stdin);
}

char * getnchars(char * arr, int n){
    int ch;
    int i;
    for(i = 0; i < n; i++){
        ch = getchar();
        if(ch != EOF  && ch != '\0' && ch != '\t' && ch != '\n'){
            arr[i] = ch;
        }else{
            break;
        }
    }
    if(ch == EOF){
        return NULL;
    }else{
        arr[i] = '\0';
    }
}