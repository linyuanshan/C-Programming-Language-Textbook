#include <stdio.h>  // 编译预处理命令，包含头文件
int multiply (int m, int n);   // 自定义乘法函数multiply ()的声明
int main( ) { //主函数
 int unitPrice,count,totalPrice;   // 变量定义，分别表示单价、数量和总价
 printf("请输入牛奶单价：");  // 输出牛奶价格输入提示信息
 scanf("%d",&unitPrice);       // 输入语句,输入牛奶单价
 printf("请输入牛奶数量：");   // 输出牛奶数量输入提示信息
 scanf("%d",&count);          // 输入语句,输入牛奶数量
 totalPrice =multiply (unitPrice,count); //调用函数multiply计算牛奶总价
 printf("牛奶总价为：%d",totalPrice); //输出结果
 return 0;
}
/*以下为自定义multiply ()函数,
实现计算两个数的乘积。*/
int multiply (int m, int n){
  int total;
  total=m*n;              // 两个整数进行乘积运算
  return total;              // 返回两个数的和值
}

