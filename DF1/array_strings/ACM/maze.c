#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    int **maze = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        maze[i] = (int *)malloc(M * sizeof(int));
        for (int j = 0; j < M; j++) {
            scanf("%d", &maze[i][j]);
        }
    }

    int **dp = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        dp[i] = (int *)malloc(M * sizeof(int));
    }

    // 初始化dp数组
    dp[0][0] = (Q > 0 && maze[0][0] % 2 != 0) ? Q : 0;
    for (int i = 1; i < N; i++) {
        if (gcd(maze[i][0], maze[i - 1][0]) == 1) {
            dp[i][0] = -1; // 无法移动到该位置
        } else {
            dp[i][0] = dp[i - 1][0];
        }
    }
    for (int j = 1; j < M; j++) {
        if (gcd(maze[0][j], maze[0][j - 1]) == 1) {
            dp[0][j] = -1; // 无法移动到该位置
        } else {
            dp[0][j] = dp[0][j - 1];
        }
    }

    // 动态规划求解
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if (dp[i - 1][j] == -1 && dp[i][j - 1] == -1) {
                dp[i][j] = -1; // 无法移动到该位置
            } else if (dp[i - 1][j] == -1) {
                dp[i][j] = dp[i][j - 1];
            } else if (dp[i][j - 1] == -1) {
                dp[i][j] = dp[i - 1][j];
            } else {
                int gcd_val = gcd(maze[i][j], maze[i - 1][j]);
                if (gcd_val == 1) {
                    dp[i][j] = -1; // 无法移动到该位置
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }

    // 输出结果
    if (dp[N - 1][M - 1] == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", dp[N - 1][M - 1]);
    }

    // 释放内存
    for (int i = 0; i < N; i++) {
        free(maze[i]);
        free(dp[i]);
    }
    free(maze);
    free(dp);

    return 0;
}
