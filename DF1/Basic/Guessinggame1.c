#include <stdio.h>
#include <stdlib.h>

int main(){
    int secretnumber = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguessess = 0;

    while (guess != secretnumber && outofguessess == 0){
    if (guesscount < guesslimit){
        printf("Enter a Number: ");
        scanf("%d", &guess);
        guesscount++;
    }else{
        outofguessess = 1;
    }
    }
if (outofguessess = 1){
    printf("You are out of guessess");
}else {
    printf("You win!");
   // return 0;
}
return 0;
}
