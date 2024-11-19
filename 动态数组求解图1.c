#include <stdio.h>

#define MAX 101 // 定义最大值，这里假设 m 和 n 最大为 100

// 动态规划数组
int f[MAX][MAX];


// 计算 f(100, 100)
int main() {

    // 初始化函数
    for (int i = 0; i < MAX; i++) {
        f[i][0] = 1; // 初始条件 f(0, n) = 1
        f[0][i] = 1; // 初始条件 f(n, 0) = 1
    }   

    // 填充动态规划数组
    for (int m = 1; m < MAX; m++) {
        for (int n = 1; n < MAX; n++) {
            f[m][n] = f[m-1][n] + f[m][n-1] - f[m-1][n-1];
        }
    }

    // 输出 f(100, 100)
    printf("f(100, 100) = %d\n", f[100][100]);

    return 0;
}
