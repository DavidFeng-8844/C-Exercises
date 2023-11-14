#include <stdio.h>
#include <string.h> 
#define STLEN 50
void ftch_arr(int n, char * arr);

int main(){
    char arr[STLEN];
    printf("Please input a string:\n");
    fgets(arr, STLEN, stdin);
    fputs(arr, stdout);
}

void ftch_arr(int n, char * arr){
    fgets(arr, STLEN, stdin);
}
