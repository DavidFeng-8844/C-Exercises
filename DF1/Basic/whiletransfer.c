#include <stdio.h>
#define SEC_TO_MIN 60
#define SHOE_CONST 34
int main(){
 //   const int shoeconst = 34;
    int shoe = 6;
    float size;
    int seconds;
    while(shoe < 13) 
    {
        printf("%-5d %-5d\n", shoe, shoe + SHOE_CONST);
        shoe++;
    } 
    printf("what is your size: ");
    scanf("%f",&size);
    if(size < 13 && size >6){
    printf("Your size is %.2f \n", size + SHOE_CONST);        
    }
    else{
    printf("Your size is unavalible\n");
    }
    printf("Enter seconds: ");
    scanf("%d",&seconds);
    while(seconds >= 0){
        int minutes = seconds / SEC_TO_MIN;
        int secs = seconds % SEC_TO_MIN;
        printf("%d Seconds is %d Minutes %d seconds", seconds, minutes, secs);
        printf("Enter your next seconds: ");
        scanf("%d",&seconds);
        printf("%d Seconds is %d Minutes %d seconds", seconds, minutes, secs);
        return 0;
    }
    // Generate a Function to count
                 
    return 0;
}