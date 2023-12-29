#include <stdio.h>
//My version of strlen
int my_strlen(char *str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}
//The C Primer Plus sting function task 9
char * s_gets(char * st, int n){
    char * ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
    while (*st != '\n' && *st != '\0'){
        st++;
        if (*st == '\n')
            *st = '\0';
        else // reach the end of the word string must have words[i] == '\0' 
            while (getchar() != '\n')
                continue;
    }
    }
    return ret_val;
}
//The s_gets_str with strchr() 
char * s_gets_str(char * st, int n){
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
    find = strchr(st, '\n'); // look for newline
    if (find) // if the address is not NULL,
        *find = '\0'; // place a null character there
    else
        while (getchar() != '\n')
            continue; // dispose of rest of line
    }
    return ret_val;

}
//The function returns the position of the first space character
char * str_spc(char * str){
    //char * pc = str;
    char * position = strchr(str, ' ');
    if(position){
        return position;
    }else{
        return NULL;
    }
}
int main(void)
{
    char str1[] = "gawsie"; // plump and cheerful
    char str2[] = "bletonism";
    char *ps;
    int i = 0;

    for (ps = str1; *ps != '\0'; ps++) {
    if ( *ps == 'a' || *ps == 'e')
         putchar(*ps);
    else
        (*ps)--;
    putchar(*ps);
    }
    putchar('\n');
    while (str2[i] != '\0' ) {
        printf("%c", i % 3 ? str2[i] : '*');
        ++i;
    }
    return 0;
}