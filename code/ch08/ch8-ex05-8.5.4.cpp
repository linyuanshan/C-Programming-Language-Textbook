#include "stdio.h"
int main() {
    int  a = 97, b = 98, t = 0;    //定义两个变量
    int *pointer_a  = &a, *pointer_b = &b; //定义两个指针
    //  交换指针变量的值
    t = *pointer_a; 
    *pointer_a = *pointer_b; 
    *pointer_b = t;
    printf("a的值为:%d, b的值为：%d\n", a, b); //输出两个变量的值
    return 0;
}