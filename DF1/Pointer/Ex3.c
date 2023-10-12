#include <stdio.h>

int lgst(const int *, const int);

int main(){
    const int arr[] = {2, 1, 3, 4, 5, 6};	
    const int arr2[] = {1222, 9465498, 364984, 75648, 516848, 446848};
    int max = 0;
    int no = 6;
    int lg = lgst(arr, no);
    printf("The largest number of the first array is: %d\n", lg);
    int lg2 = lgst(arr2, no);
    printf("The largest number of the second array is %d\n", lg2);
    int * pt1 = (int []){61891,19891,119,848,484,488,4848,8448,4848,48};
    int lg3 = lgst(pt1, 10);
    printf("The largest number of the second array is %d",lg3);//Compound Literal

     
    		    
}
int lgst(const int * arr, const int no){
	int max = 0;
	for(int i = 0; i < no; i++){ 
        if(max < arr[i]){
            max = arr[i];
        }
		}

        //printf("The largest number is: %d", max);
        return max;

		     		
}
	
	


     
    


	
