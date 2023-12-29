#include <stdio.h>
#include <string.h>  // 添加这行来包含 memcpy 函数的头文件

#define Reversemode 0

double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};	// global array
double tdar[3][5] = {{1.1, 2.2, 3.3, 4.4, 5.5}, {6.1, 7.2, 8.3, 9.4, 10.5},{11.1, 12.1, 13.1, 14.1, 15.1}};
double tdar1[3][5];

double max(double *ptr, int size);	// function prototype (declaration
double min(double *ptr, int size);	// function prototype (declaration)
double* reverse(double *ptr, double *ptrr, int size);
void copy_arr(double (*target1) [], double (*source) [], int a);


int main(){
    double *ptr = arr;	// pointer to arr[0]
    int i;
    double ma = max(ptr, 5);	// call max()
    double mi = min(ptr, 5);	// call min()
    printf("The difference between the max and the min is %f\n", ma - mi);

    #if Reversemode == 1
    double ptrr[5];
    double* arrr = reverse(ptr, ptrr, 5);
        for(int i = 0; i < 5; i++){
        printf("The %d element of the reverse array is %f \n", i, arrr[i]);
    }
    #endif
     
    copy_arr(tdar1, tdar, 3);
    copy_arr1(tdar1, tdar, 5);
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

void copy_arr(double target1[][5], double source[][5], int a){
    for(int i = 0; i < a; i++){
        memcpy(target1[i], source[i], sizeof(double) * 5);
        //double opt = target1[i];
        //printf("The %d element of target1 is: %f", i + 1, opt);
        printf("\n");
    }


  /*  for(int i = 0; i < a; i++){
        target1[i] = source[i];
        //double opt = target1[i];
        //printf("The %d element of target1 is: %f", i + 1, opt);
        printf("\n");
    }*/

}

void copy_arr1(double target1[] , double source[], int a){
    for(int i = 0; i < a; i++){
        target1[i] = source[i];
        double opt = target1[i];
        printf("The %d element of target1 is: %f", i + 1, opt);
        printf("\n");
    }

}
