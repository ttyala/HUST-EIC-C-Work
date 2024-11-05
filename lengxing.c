#include <stdio.h>

void print_rhombus(int n) {
    if (n < 1) {
        printf("高度必须大于等于1。\n");
        return;
    }

    // 打印上半部分
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("x");
        }
        printf("\n");
    }
    
    // 打印下半部分
    for (int o = n - 1; o > 0; o--) {
        for (int l = 0; l < n - o; l++) {
            printf(" ");
        }
        for (int m = 0; m < 2 * o - 1; m++) {
            printf("x");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("请输入高度: ");
    
    // 检查输入有效性
    if (scanf("%d", &height) != 1) {
        printf("无效输入，请输入一个整数。\n");
        return 1;
    }
    
    print_rhombus(height);
    return 0;
}
