#include <stdio.h>
int main(){
   int sum = 103;  //定义捐款总数
   int count = 7;  //定义捐款人数
   double average1，average2;  //定义两种不同精度的平均捐款数
   average1 = sum / count;    //计算第一种精度的平均捐款数
   average2 = (double) sum / count; //计算第二种精度的平均捐款数
   printf("Average1 is %f\n", average1); //输出第一种精度的平均捐款数
   printf("Average2 is %f\n", average2); //输出第二种精度的平均捐款数
   return 0;
}