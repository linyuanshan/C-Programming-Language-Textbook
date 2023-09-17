	#include <stdio.h>
	#define N 10        /* 输出2的10次幂,N的参数可调整*/
	int main(void) {
		int n;            /* 记录当前指数 */
		int val = 1;       /* 保存 2^n 的结果 */
		printf("\t  n  \t    2^n\n");
		printf("\t================\n");
		for (n=0; n<=N; n++) {
			printf("\t%3d \t %6d\n", n, val);
			val = 2*val;
		}
	}

