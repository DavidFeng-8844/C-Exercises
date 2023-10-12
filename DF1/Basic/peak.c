#include <stdio.h>

int peakElement(int arr[], int n);

int main() {
    int arr[] = {1, 2, 4, 3};
    int N = 4;
    int prt = peakElement(arr, N);
    printf("%d", prt);
    return 0;
}

int peakElement(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
            (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
            return arr[mid]; // Found a peak element
        } else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            right = mid - 1; // Move left in the search range
        } else {
            left = mid + 1; // Move right in the search range
        }
    }

    return -1; // No peak element found
}
