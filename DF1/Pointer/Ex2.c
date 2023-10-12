#include <stdio.h>

void copy_arr(double[] , double[], int);
void copy_ptr(double * , double *, int);
void copy_ptrs(double * , double *, double *);

int main(){
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    
}

void copy_arr(double target1[] , double source[], int a){
    for(int i = 0; i < a; i++){
        target1[i] = source[i];
        double opt = target1[i];
        printf("The %d element of target1 is: %f", i + 1, opt);
        printf("\n");
    }

}

void copy_ptr(double * target2, double * source, int b){

    for(int i = 0; i < b; i++){
        *(target2 + i) = *(source + i);
        double opt = *(target2 + i);
        printf("The %d element of target2 is: %f", i + 1, opt);
        printf("\n");
    }
  
}

void copy_ptrs(double * target3, double * source, double * source2){

    for(int i = 0; source < source2; source++, i++){
        *target3 = *source;
        double opt = *target3;
        printf("The %d element of target3 is: %f", i + 1, opt);
        printf("\n");
    }
}