#include <stdio.h>
int main() {
    int a = 1;
    int b = 2;
    float c = (float) a / b;
    printf("a / b = %f\n", c);
    int count = 10;
    for (int i = 0, s = 0; i < count; s = ++i)
    {
        printf("i = %d\t", i);
        printf("s = %d\n",s);
    }
    
}