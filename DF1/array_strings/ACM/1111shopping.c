#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define USER_INPUT 0

int tian(int m){//tian's price
  if(m > 500){
    return m - floor(m/10);
  }
  else{
    return m;
  }
}

int dong(int d){//jingdong's price
    if(d > 1000){
        return d - 150;
    }
    else{
        return d;
    }
}

int yin(int y){//douyin's price
    if(y == 1111){
        return 0;
    }else{
        return y - floor(y * 0.05);
    }
}

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int n; //The total number of goods you want to buy
  int p[2000]; //The array to store the price of each good
  #if USER_INPUT
  printf("Please insert the total number of goods you want to buy: (from1 to 10000): ");
  scanf("%i", &n);
  printf("Please insert the price of each good: (from 20 to 2000):  ");
  for(int i = 0; i < n; i++){   //The loop to store the price of each good
    scanf("%i", &p[i]); 
  }
  #endif 
  //Test case 1
  scanf("%i\n", &n);
  for(int i = 0; i < n; i++){   //The loop to store the price of each good3
    scanf("%i", &p[i]); 
  }
  //Loop through the array to update the price of each element in the array
    for(int i = 0; i < n; i++){
        int m = tian(p[i]);
        int d = dong(p[i]);
        int y = yin(p[i]);
        if(m < d && m < y){
            p[i] = m;
        }else if(d < m && d < y){
            p[i] = d;
        }else if(y < m && y < d){
            p[i] = y;
        }

    }
    //Loop through the array to calculate the total price
    int total = 0;
    for(int i = 0; i < n; i++){
        total += p[i];
    }
    //Print out the total price
    printf("%i", total);

  return 0;
}