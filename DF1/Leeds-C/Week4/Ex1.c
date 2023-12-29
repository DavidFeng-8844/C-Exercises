#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(a%b == 0) {
        printf("%d is a multiple of %d\n", a, b);
    } else {
        printf("%d is not a multiple of %d\n", a, b);
    }
}