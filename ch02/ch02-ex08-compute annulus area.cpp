#include <stdio.h>
#define  PI  3.1415926
int main() {
    int R, r;       //分别定义圆环的外环半径和内环半径为R和r
    float annular_area;     //定义变量annular_area为圆环面积
    scanf("%d%d",&R,&r); //从键盘输入外半径R和内半径r
    annular_area = PI * R * R - PI * r * r;  //圆环的面积
    printf("圆环的面积为：annular_area=  %.2f\n", annular_area);
    return 0;
}