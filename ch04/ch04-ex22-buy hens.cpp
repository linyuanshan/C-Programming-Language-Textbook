	#include <stdio.h>
	int main() {
		int i, j, k;
		printf("百元买百鸡的问题所有可能的解如下：\n");
		for( i=0; i <= 100; i++ )
			for( j=0; j <= 100; j++ )
				for( k=0; k <= 100; k++ ) {
					if( 5*i+3*j+k/3==100 && k%3==0 && i+j+k==100 ) {
					printf("公鸡 %2d 只，母鸡 %2d 只，小鸡 %2d 只\n", i, j, k);
					}
				}
		return 0;
	}

