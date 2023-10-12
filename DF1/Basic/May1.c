/*#include <stdio.h>
int main(){
    int m;
    for(m=18; m<45; m++){
    printf("mary's age is %d\n", m );
}
return 0;
}*/
#include <stdio.h>
void david(void);
int main(void){

        int age = 18;
        int ageD = age * 365;

        printf("David Feng\n");
        printf("Enter Your Age: ");
        scanf("%d", &age);
        printf("Your Age in terms of days is %d", age*365);
        printf("Age: %d",ageD);
        return 0;
}
void david(void){
    printf("ss\n");
}


