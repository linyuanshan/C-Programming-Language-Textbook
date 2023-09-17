	# include <stdio.h>
	int main() {
		int a,b;
		a=1;
		while (a<=5) {            /*控制换行*/
			b=1;
			while (b<=a) {        /*控制每行10个星号*/
				printf("*");
				b=b+1;
			}
			printf("\n");
			a=a+1;
		}
	}

