#include<stdio.h>
int main(){
        int numA=20;           //定义第一个数并赋初值
        int numB=6;            //定义第二个数并赋初值
        int result;              //定义计算结果
        printf("numA = %d,numB = %d \n", numA, numB);//输出这两个数
        result=numA +numB;   //计算两个数的和
        printf("%d +%d= %d\n", numA,numB,result); //输出两个数的和
        result=numA -numB;   //计算两个数的差
        printf("%d -%d= %d\n", numA,numB,result); //输出两个数的差
        result=numA*numB;   //计算两个数的积
        printf("%d * %d = %d\n", numA,numB,result);/输出两个数的积
        result=numA/numB;   //计算两个数的商
        printf("%d /%d = %d\n", numA,numB,result);//输出两个数的商
        result=numA %numB;   //计算两个数相除的余数
        printf("%d %%%d = %d\n", numA,numB,result);//输出两个数整除余数
        return 0;
}