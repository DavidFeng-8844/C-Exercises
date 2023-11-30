#include <stdio.h> 
int main()
{
int num = 44;
int * const a = &num;
printf("%i\n",*a);
printf("%i\n", a);
*a = 18;
char * str = "";
printf("%d", *a);
return 0;
}