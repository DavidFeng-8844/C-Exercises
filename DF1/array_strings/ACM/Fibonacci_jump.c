#include <stdio.h>
#include <stdbool.h>

#define MAXN 1005  // 假设排列的最大长度为1000

int a[MAXN];  // 保存排列的数组
bool dp[MAXN][MAXN];  // dp数组

// 斐波那契数列
int fib[] = {1, 2, 3, 5, 8};

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }

    // 初始化dp数组
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // 状态转移
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            for (int k = 0; k < 5; ++k) {
                int pre = i - fib[k];
                if (pre >= j && dp[pre][j - 1] && a[pre] < a[i]) {
                    dp[i][j] = true;
                    break;
                }
            }
        }
    }

    // 输出结果
    for (int i = 2; i < n; ++i) {
        if (dp[n][i]) {
            printf("LittleLan\n");
        } else {
            printf("LittleQiao\n");
        }
    }

    return 0;
}
