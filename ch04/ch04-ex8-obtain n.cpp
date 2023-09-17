	#include "stdio.h"
	main() {
		int n=0,sum=0;            /*定义变量并初始化*/
		do {                     /*循环*/
			n++;                 /*n的值是1*/
			sum+=n;              /*求和*/
		} while(sum<500);          /*条件表达式*/
		printf("n=%d,sum=%d\n",n,sum);
	}

