#include <stdio.h>
int main(){
    for(int a = 0, b = 1, i = 0, count = 0; count < 60;printf("%d, ",a),i = a, a = b, b = i + b, count++);
} 
