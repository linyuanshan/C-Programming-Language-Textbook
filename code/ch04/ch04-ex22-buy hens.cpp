	#include <stdio.h>
	int main() {
		int i, j, k;
		printf("��Ԫ��ټ����������п��ܵĽ����£�\n");
		for( i=0; i <= 100; i++ )
			for( j=0; j <= 100; j++ )
				for( k=0; k <= 100; k++ ) {
					if( 5*i+3*j+k/3==100 && k%3==0 && i+j+k==100 ) {
					printf("���� %2d ֻ��ĸ�� %2d ֻ��С�� %2d ֻ\n", i, j, k);
					}
				}
		return 0;
	}

