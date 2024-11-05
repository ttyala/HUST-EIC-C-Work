#include <stdio.h>

void print_rhombus(int n) {
    if (n < 1) {
        printf("�߶ȱ�����ڵ���1��\n");
        return;
    }

    // ��ӡ�ϰ벿��
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("x");
        }
        printf("\n");
    }
    
    // ��ӡ�°벿��
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
    printf("������߶�: ");
    
    // ���������Ч��
    if (scanf("%d", &height) != 1) {
        printf("��Ч���룬������һ��������\n");
        return 1;
    }
    
    print_rhombus(height);
    return 0;
}
