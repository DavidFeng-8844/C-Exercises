#include <stdio.h>

long long factorial(long long n);

long long main(){
    long long inn;
    printf("Enter the integer number you want to do the factorial");
    scanf("%lld", &inn);
    long long fan = factorial(inn);
    printf("The factorial of %lld is %lld", inn, fan);
    return 0;
}

long long factorial(long long n){
    long long output;
    if(n <= 1){
        return n;
    }
    else{
        output = n * factorial(n-1);
        return output;
    }
}