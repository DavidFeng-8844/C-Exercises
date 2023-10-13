#include <stdio.h>
int main (void)
{
int values[10];
for(int i = 0; i < 10; ++i){
    values[i] = 0;
}
float float_values[10] = {0.0, 1.0, 4.0, 9.0, 16.0, 17.0, 21.0, 25.0, 29.0, 36.0};
float tot = 0.0;
for(int i = 0; i < 9; i++)
{   
    tot += float_values[i];	
}
printf("The total is %f\n", tot);
printf("The average is %f\n", tot/10);

int index;
values[0] = 197;
values[2] = -100;
values[5] = 350;
values[3] = values[0] + values[5];
values[9] = values[5] / 10;
--values[2];
for ( index = 0; index < 10; ++index )
printf ("values[%i] = %i\n", index,values[index]);
return 0;
}
