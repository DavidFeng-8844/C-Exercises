#include <stdio.h> 
 int main(){
    int a, b, c, k;
    int iq = 0;
    scanf("%i%i%i%i",&a, &b, &c, &k);
		if(a >= k){
            iq = k;
        }else if(k > a){
            iq = a;
        }
   
    printf("%i", iq);
    return 0;
 }