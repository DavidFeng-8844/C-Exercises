#include <stdio.h>
int main(){
    for(int a = 0, b = 1, i = 0, count = 0; count < 60;printf("%d, ",i), i = a + b, a = b, b = i, count++ );
} 