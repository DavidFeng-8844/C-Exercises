#include <stdio.h>
#include "max.h"
#define SIZE 5 

int sum(int *sdata, int *smax);
int main(void)
{
 int data[] = {5, 6, 7, 8, 9}; 
 int i;
//printf("%2s%14s\n",
//"i", "data[i]");
 for (i = 0; i < SIZE ; i++)
   printf("%2d%14d\n", i, data[i]);
   printf("Size of the Array is: %d\n ", sizeof(data) / sizeof(data[0]));
 sum(data, data + SIZE);
 Max(data[0], data[1]);


return 0;
}
 int sum(int *sdata, int *smax){
  int total = 0;
  int count = 0;
   while(sdata < smax)
 {
   printf("%2d%14d\n", count ,*sdata);
   sdata++;
   count++;
 }

   printf("Size of the Array is: %d\n ", sizeof(sdata));
 }

