	#include <stdio.h>
	#define N 10        /* ���2��10����,N�Ĳ����ɵ���*/
	int main(void) {
		int n;            /* ��¼��ǰָ�� */
		int val = 1;       /* ���� 2^n �Ľ�� */
		printf("\t  n  \t    2^n\n");
		printf("\t================\n");
		for (n=0; n<=N; n++) {
			printf("\t%3d \t %6d\n", n, val);
			val = 2*val;
		}
	}

