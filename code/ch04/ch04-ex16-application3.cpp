	#include"stdio.h"
	main( ) {
		int s,sum,n;
		float average;
		n=0;
		sum=0;
		scanf("%d",&s);                  	/*接受用户输入一个成绩*/
		while (s>=0) {                  	/*当成绩大于等于零时，进行循环*/
			sum=sum+s;                 	/*累加*/
			n++;                     	/*计数*/
			scanf("%d",&s);
		}
		average=sum/(float)n;
		printf("sum=%d,average=%f\n",sum,average);
	}

