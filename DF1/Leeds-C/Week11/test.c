#include <stdio.h> 
#define AR_SQ(r) 3.14 * r * r
#ifndef CR
#define CR 1 
#endif 
int main(){
    #if CR 
    puts("Enter the radius of the circle");
    double r;
    scanf("%lf", &r);
    printf("The area of the circle is %f\n", AR_SQ(r));
    #endif
    return 0;
}