#include <stdio.h>
#include "max.h"
int main(){
    int a = 1;
    int b = 2;
    //Max(a, b);
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    double rank[3] = {44.18, 18.44, 8.44};
    const double locked[4] = {0.08, 0.075, 0.0725, 0.07};
    const double * pc = rates; // valid
    printf("The original value of pc: %.2f\n",*pc);
    pc = locked;  
    printf("The value of pc after address is changed: %.2f\n",*pc);
    double * const pd = rates;
    printf("The original value of pd: %p\n",pd);
    *pd = *locked;
   //pd = locked;   //error addrres can't be altered
    printf("Altered pd value: %.2f\n",*pd);
    printf("Altered pd Address: %p\n",pd);
    double * pe = rates ;  
    printf("The original value of pe: %.2f\n",*pe);
    pe = rank;
    printf("The altered pe: %.2f\n",*pe);
   // pe = locked; // error--only the addresses of non-constant data can be assigned to regular pointers:

}