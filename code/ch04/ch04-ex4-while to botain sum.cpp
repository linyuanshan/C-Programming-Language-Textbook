	#include<stdio.h>
	main( ) {
		int i=1,sum=0;           /*循环变量i，初值1*/
		while (i<=100) {       /*循环条件，控制循环趋于结束*/
			sum=sum+i;
			i++;             /*循环体中，循环变量i的值在变化*/
		}
		printf("%d ",sum);
	}

