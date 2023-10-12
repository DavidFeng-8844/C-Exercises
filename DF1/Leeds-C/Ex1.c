#include <stdio.h>

int cal(int, int[][5]);

int main() {
    int length, width;
    int area, perimeter;
    int array[5][5];

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("The area of the rectangle is %d\n", area);
    printf("The perimeter of the rectangle is %d\n", perimeter);
    printf("The length of the rectangle is %d\n", length);
    printf("The width of the rectangle is %d\n", width);

    cal(5, array); // Pass the array by reference

    return 0;
}

int cal(int a, int array[][5]) {
    int l, w;
    for (int i = 0; i < a; i++) {
        printf("Enter the length of rectangle %d: ", i + 1);
        scanf("%d", &l);
        array[i][0] = l; // Store length in the first column

        for (int j = 0; j < 5; j++) {
            printf("Enter the width of rectangle %d: ", j + 1);
            scanf("%d", &w);
            array[i][j + 1] = w; // Store width in subsequent columns
        }
    }
}
