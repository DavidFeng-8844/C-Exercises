#include <stdio.h>
double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};	// global array
double max(double *ptr, int size);	// function prototype (declaration
double min(double *ptr, int size);	// function prototype (declaration)

int main(){
    double *ptr = arr;	// pointer to arr[0]
    int i;
    double ma = max(ptr, 5);	// call max()
    double mi = min(ptr, 5);	// call min()
    printf("The difference between the max and the min is %f\n", ma - mi); 
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