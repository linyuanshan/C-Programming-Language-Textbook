#include "stdio.h"
int main() {
    int  a = 97, b = 98, t = 0;    //������������
    int *pointer_a  = &a, *pointer_b = &b; //��������ָ��
    //  ����ָ�������ֵ
    t = *pointer_a; 
    *pointer_a = *pointer_b; 
    *pointer_b = t;
    printf("a��ֵΪ:%d, b��ֵΪ��%d\n", a, b); //�������������ֵ
    return 0;
}