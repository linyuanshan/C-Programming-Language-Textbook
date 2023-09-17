	#include<stdio.h>
	main( ) {
		long i,sum;
		int k;
		scanf("%ld",&i);
		sum=0;
		while (i!=0) {
			k=i%10;      /*确定个位上的数字*/
			sum=sum+k;  /*把分离出来的数字累加*/
		i=i/10;       /*把个位上的数字划掉*/
		}
		printf("\nsum is %d",sum);
	}

