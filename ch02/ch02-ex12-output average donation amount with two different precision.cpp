#include <stdio.h>
int main() {
	float sum = 400.5f; //定义捐款总数并赋初值
	int count = 5;  //定义捐款人数并赋初值
	double average;  //定义平均捐款数
	int isum = (int)sum;//强制类型转换
	average = sum / count;     //计算平均捐款数
	printf("sum = %.2f\n", sum); //输出浮点格式的捐款总数
	printf("isum = %d\n", isum);//输出整形格式的捐款总数
	printf("average = %.2f\n", average);//输出人均捐款数
                return 0;
}