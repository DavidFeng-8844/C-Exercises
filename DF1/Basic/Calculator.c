#include <stdio.h>
#include <stdlib.h>
int alter(int *, int *);
int max(int, int, int);
int main()
{
    int a = 8, b = 18, c = 44, d;
    d = max(a, b, c);
    printf("%d\n",d);
    int x = 18, y = 44;
    alter (&x, &y);
    double num1;
    double num2;
    char op;
     printf("Enter a number: ");
     scanf("%lf", &num1);
     printf("Enter operation ");
     scanf(" %c", &op);
     printf("Enter a number: ");
     scanf("%lf", &num2);
     
     if(op == '+'){
         printf("%.2lf\n",num1+num2);
     }else if (op =='-'){
         printf("%.2lf\n",num1-num2);
     }else if (op =='*'){
         printf("%.2lf\n",num1*num2);
     }else if (op =='/'){
         if (num2 != 0) {
             printf("%.2lf\n",num1/num2);
         } else {
             printf("Cannot divide by zero\n");
         }
     }else {
         printf("Invalid Value\n");
     }
     return 0;
}





 int alter(int * x, int * y){

 int temp1 = *x + *y;
 int temp2 = *x - *y;
 *x = temp1;
 *y = temp2;
 printf("%d, %d\n",*x,*y);
}



int max(int a, int b, int c){
    if(a > b && a > c)
    {
    return a;
    }
    else if (b > a && b > c){
    return b;
    }
    else{
    return c;
    }
}
