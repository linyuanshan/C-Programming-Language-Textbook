#include "stdio.h"
int max(int a,int b){         //定义求a和b中最大值的函数max
    return a>b?a:b;        //返回a和b中的最大值
}  
int main() {
    char ch = 'a';          //声明char类型变量ch并赋初值
    int num = 97;         //声明int类型变量num并赋初值
    char cCName[50];     //声明char类型数组变量cCName
    printf("ch 的地址:%p\n",&ch);  //输出char类型变量ch的内存地址
    printf("num的地址:%p\n",&num); //输出int类型变量num的内存地址
    printf("cCName数组的地址%p\n",cCName);//输出char数组cCName内存地址

    return 0;
}

