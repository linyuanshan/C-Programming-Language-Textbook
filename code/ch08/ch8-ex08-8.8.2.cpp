#include "stdio.h"
int main() {
    int a[10] = {0}, i = 0;
    int *pa = NULL;
    pa = a;
    printf("������10��������\n");
    for (; i < 10; i++) {
        scanf("%d", pa++);
    }
    pa = a;      //����Ҫ
    printf("10������Ԫ�ص�ֵ�ֱ�Ϊ��\n");
    for (i = 0; i < 10; i++) {
        printf("%3d", *(pa++));
    }
    printf("\n");
    return 0;
}