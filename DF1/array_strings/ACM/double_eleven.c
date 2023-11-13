#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  //11^1111的个位数是多少？
  int a = 11;
  int b = 1111;
  int c = 1;
  int i = 0;
  for(i = 0; i < b; i++){
    c = c * a;
  }
    c = c % 10;
  printf("%i\n", c);
  return 0;
}