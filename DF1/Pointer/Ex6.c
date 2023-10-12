#include <stdio.h>
#define Reversemode 0
double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};	// global array
double max(double *ptr, int size);	// function prototype (declaration
double min(double *ptr, int size);	// function prototype (declaration)
double* reverse(double *ptr, double *ptrr, int size);

int main(){
    printf("%s\n", __FILE__);

    double *ptr = arr;	// pointer to arr[0]
    int i;
    double ma = max(ptr, 5);	// call max()
    double mi = min(ptr, 5);	// call min()
    double ptrr[5];
    
    printf("The difference between the max and the min is %f\n", ma - mi); 
    #if Reversemode == 1
    double* arrr = reverse(ptr, ptrr, 5);
    for(int i = 0; i < 5; i++){
        printf("The %d element of the reverse array is %f \n", i, arrr[i]);
    }
    #endif
    #ifdef Reversemode
    return 0;
}

double max(double *ptr, int size){
    double max = *ptr;
    for(int i = 0; i < size; i++){
        if(max < *(ptr + i)){
            max = *(ptr + i);
        }
    }
    return max;
}

double min(double *ptr, int size){
    double min = *ptr;
    for(int i = 0; i < size; i++){
        if(min > *(ptr + i)){
            min = *(ptr + i);
        }
    }
    return min;
}

double* reverse(double *ptr, double *ptrr, int size){
    
    for(int i = 0; i < size; i++){
        ptrr[i] = *(ptr + size - i - 1);
    }
    return ptrr;
}