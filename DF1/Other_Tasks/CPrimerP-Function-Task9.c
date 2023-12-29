#include <stdio.h>
int display();
int inpt_lim(int *, int *); //Declare a function to receive the input value from the user
int minimal(int, int *, int *);//Declare a function to output the result

int main(){
 int max, min;
 display();//Display the Option Menu
 inpt_lim(&max, &min);//Get the user's input
 return 0;
}
 int display (){
  printf("1) copy files     2) move files\n");
  printf("3) remove files   4) quit\n");        
  printf("Enter the number of your choice: ");
}
int inpt_lim(int * imax, int * imin){ 
  int inpt, cmax, cmin; //Initialise the User Input Variable(inpt, cmax and cmin)
  int state = scanf("%d",  &inpt);//Get the input and the state of the input
  
  //int mmax = cmax;//Pass the input value to the funtion minimal() 
  //int mmin = cmin;           What if I put the value transfer to the front
  
  printf("Enter a maximum number: ");
  scanf("%d",&cmax);
  printf("Enter a minimum number: ");
  scanf("%d",&cmin);  
  
  *imax = cmax;//Pass the input max value to the Pointer for later modification
  *imin = cmin;//Pass the input min value to the Pointer for later modification
  int mmax = cmax;//Pass the input value to the funtion minimal() 
  int mmin = cmin;

  if (state == 1  && inpt < *imax && inpt > *imin){
    minimal(inpt, &mmax, &mmin);
    //printf("\n%d\t%d", *imax, *imin); 
    return inpt;
  }
  else if(state == 0 || inpt > *imax || inpt < *imin ){
    printf("It is out of the range, ");// Inform the user the number is out of the range 
    if(inpt > *imax){
      printf("It is too big.\n");
    }else if(inpt < *imin){
      printf("It is too small.\n");
    }else{
      printf("Please Insert a value.\n");
    }
    display();  
    inpt_lim(imax, imin); //Recurse to the menu
  }
}
int minimal(int inpt, int * mmax, int * mmin){
    switch (inpt)
    {
    case 1: 
        printf("1) copy files ");
        break;
    case 2:
        printf("2) move files ");
        break;
    case 3:
        printf("3) remove files");
        break;
    case 4:
        printf("4) quit");
        break;          
   // default:
      // printf("Your Value is a customized value"); 
        break;
    }
    if(inpt >  4 || inpt < 1){
      printf("Your Value Value %d is a customized value\n", inpt); 
      printf("The range of your input is:");
      printf("\nmax\tmin");
      printf("\n%d\t%d", *mmax, *mmin); 
    }
    else{
      printf("\nThe range of your input is:");
      printf("\nmax\tmin");
      printf("\n%d\t%d", *mmax, *mmin); 
    }
}



