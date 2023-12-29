#include <stdio.h>
#include <string.h>

#define STR_LTH 0

int stringLength(char s[]);

int main(){
    FILE * wrd = fopen("wrd.txt", "r");

    char word[] = {'H', 'e', 'l', 'l', 'o', '\0'};	
    printf("%s\n", word);

    #if STR_LTH
    int c = getchar(); // read the first character
    while(c!=EOF) { // while the char is not EOF
      if(c>='A'&&c<='Z')
        c = c+('a'-'A'); // convert upper case to lowerput
        char(c); // print the character on the screen
        c = getchar(); // get another character
    }
    #endif 

    //Copy the first string
    char word_copy[6];
    strncpy(word_copy, word, 5);
    printf("%s\n", word_copy);

    //Returns the length of a string
    int length1 = stringLength(word);
    printf("The length of the string 'word' is %d", length1);

    //fgets
    char word_copy1[100];
    fgets(word_copy1, sizeof(word_copy1), wrd);
    printf("\n%s", word_copy1);


    

    //Close the file
    fclose(wrd);
}       

int stringLength(char s[]){
    
    int len = 0;
    while (s[len] != 0)
    {
        len ++;
    }
    return len;
    
}