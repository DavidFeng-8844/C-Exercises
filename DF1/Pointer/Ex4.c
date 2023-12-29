#include <stdio.h>

double max(double *, int);
double min(double *, int);

int main(){
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = 5;
    printf("Max: %f\n", max(arr, size));
    printf("Min: %f\n", min(arr, size));
}

double max(double *arr, int size){
    double max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//debug 
double min(double *arr, int size) {
    double min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}