	#include "stdio.h"
	main() {
		int n=0,sum=0;            /*�����������ʼ��*/
		do {                     /*ѭ��*/
			n++;                 /*n��ֵ��1*/
			sum+=n;              /*���*/
		} while(sum<500);          /*�������ʽ*/
		printf("n=%d,sum=%d\n",n,sum);
	}

