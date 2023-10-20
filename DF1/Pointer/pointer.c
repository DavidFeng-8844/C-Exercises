#include <stdio.h>
#include <stdlib.h>
int main(){
   int age = 30;
    int *p = &age;
    printf("%d\n", *&*&age);
   /*char line [255];
    FILE * fpointer = fopen("employee.txt","r");
  //  fprintf (fpointer,"Mary \n David \n Feng" );
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);*/
    
    int a = 101, b = 10;//定义整型变量a，b并初始化
    int* p1, * p2;     //定义指向整型数据的指针变量p1，p2；
    p1 = &a;          //把变量a的地址赋给指针变量p1
    p2 = &b;         //把变量b的地址赋给指针变量p2
    printf("a=%d,b=%d\n", a, b);//输出变量a和b的值
    printf("*p1=%d,*p2=%d\n", *p1, *p2);
    printf("%d",*&a);
          
    return 0;
}
