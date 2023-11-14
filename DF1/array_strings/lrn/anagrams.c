#include<stdio.h>
#include<string.h>
int main() {
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  //Create two strings
  char s1[] =  "abcd"; 
  char s2[] = "abcd";

  //Use strlen() to determine the length of the two strings
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int flag = 0;
  //loop through string1
  for(int i = 0; i < len1; i++){
    switch(s1[i]){
      case 'a':
      counter1[0] += 1;
      break;

      case 'b':
      counter1[1] += 1;
      break;

      case 'c':
      counter1[2] += 1;
      break;

      case 'd':
      counter1[3] += 1;
      break;

      default:
      break;
    }
  }
    //loop through string2
  for(int j = 0; j < len1; j++){ 
    switch(s2[j]){
      case 'a':
      counter2[0] += 1;
      break;

      case 'b':
      counter2[1] += 1;
      break;

      case 'c':
      counter2[2] += 1;
      break;

      case 'd':
      counter2[3] += 1;
      break;

      default:
      break;
    }
  }

  //Loop through both the counter  
  for(int m = 0; m < 4; m++){
    if(counter1[m] != counter2[m]){
      flag = 1;
    }else{
      flag = 0;
    }
  }

  //print the outcome
  if(flag = 1){
    printf("Not Anagram");
  }else{
    printf("Anagram");
  }
  return 0;
}


