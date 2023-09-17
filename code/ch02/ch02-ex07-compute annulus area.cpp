#include <stdio.h>
int main() {
  int R, r;              //分别定义圆环的外环半径和内环半径为R和r
  float annular_area;     //定义变量annular_area为圆环面积
  scanf("%d  %d",&R,&r); //从键盘输入外半径R和内半径r
  annular_area = 3.1415926 * R * R - 3.1415926 * r * r;  //圆环的面积
  printf("圆环的面积为annular_area=  %.2f\n", annular_area);
  return 0;
}