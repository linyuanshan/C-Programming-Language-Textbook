	#include<stdio.h>
	main( ) {
		long i,sum;
		int k;
		scanf("%ld",&i);
		sum=0;
		while (i!=0) {
			k=i%10;      /*ȷ����λ�ϵ�����*/
			sum=sum+k;  /*�ѷ�������������ۼ�*/
		i=i/10;       /*�Ѹ�λ�ϵ����ֻ���*/
		}
		printf("\nsum is %d",sum);
	}

