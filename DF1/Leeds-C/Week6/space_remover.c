#include <stdio.h>
int main (int argc, char **argv){
if(argc < 3) {
    printf("usage: space_remover inputfile.txt outputfile.txt\n");
    return 1;
}
    FILE *input = fopen(argv[1],"r");
    FILE *output = fopen(argv[2],"w");
if(input == NULL || output == NULL) {
    printf("error opening file\n");
    return 2;
}
}