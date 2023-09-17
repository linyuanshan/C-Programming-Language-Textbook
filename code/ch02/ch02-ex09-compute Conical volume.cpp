
#include <stdio.h>
#define  PI  3.1415926     //定义符号常量PI
#define  FACTOR  (PI/3)   //利用已定义的PI继续定义符号常量FACTOR
int main(void) {
     int r=5，h=10;//分别定义圆口半径r和圆锥体高h，并为他们赋初值
     double vol;//定义圆锥体体积
     vol=FACTOR*r*r*h;    /*使用符号常量FACTOR计算体积*/
     printf("圆锥体的体积为：vol=  %.2f\n ", vol);   
    return 0;
}