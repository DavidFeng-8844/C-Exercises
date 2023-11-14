/* compare.c -- this will work */
#include <stdio.h>
#include <string.h> // declares strcmp()
#include <ctype.h>
#define ANSWER "GRANT"
#define SIZE 40
char * s_gets(char * st, int n);
void ToUpper(char * str);
int main(void)
{
char try[SIZE];
puts("Who is buried in Grant's tomb?");
s_gets(try, SIZE);
ToUpper(try);
while (strcmp(try,ANSWER) != 0)
{
puts("No, that's wrong. Try again.");
s_gets(try, SIZE);
ToUpper(try);
}
puts("That's right!");
return 0;
}

void ToUpper(char * str){
    while (*str != '\0'){
        *str = toupper(*str);
        str++;
        }
    }

char * s_gets(char * st, int n){
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);

    if (ret_val){
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}