#include <stdio.h>
int main() {
    float top, bottom, height;  //声明三个变量，分别表示梯形上底长、下底长和高
    top = 3;        //为上底长top赋值3
    bottom = 8;     //为下底长bottom赋值8
    height = 5;      //为梯形高height赋值5
    float tra_area;        //声明变量tra_area，用其表示梯形面积
    tra_area = (top + bottom)*height / 2;  //计算梯形面积，并将值赋给变量tra_area  
    printf("梯形面积为：tra_area=  %.2f \n", tra_area);   //输出面积值
    return 0;
}