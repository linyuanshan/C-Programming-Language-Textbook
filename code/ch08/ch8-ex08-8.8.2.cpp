#include "stdio.h"
int main() {
    int a[10] = {0}, i = 0;
    int *pa = NULL;
    pa = a;
    printf("请输入10个整数：\n");
    for (; i < 10; i++) {
        scanf("%d", pa++);
    }
    pa = a;      //很重要
    printf("10个数组元素的值分别为：\n");
    for (i = 0; i < 10; i++) {
        printf("%3d", *(pa++));
    }
    printf("\n");
    return 0;
}