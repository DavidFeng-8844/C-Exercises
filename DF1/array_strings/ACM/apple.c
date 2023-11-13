#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int *apples = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &apples[i]);
    }

    qsort(apples, N, sizeof(int), compare);

    int left = 0, right = N - 1, ans = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        long long count = 0;

        for (int i = N - 1; i > mid; i--) {
            count += apples[i];
        }

        ans += count;

        if (count == 0) {
            break;
        } else {
            right = mid - 1;
        }
    }

    printf("%d\n", ans);

    free(apples);
    return 0;
}
