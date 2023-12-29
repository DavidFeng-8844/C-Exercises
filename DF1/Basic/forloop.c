#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i, j;
    int luckynum[3][2] = {
        {1, 5},
        {2, 4},
        {9, 8}
    };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d,", luckynum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
