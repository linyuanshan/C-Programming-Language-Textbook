	# include <stdio.h>
	int main() {
		int a,b;
		a=1;
		while (a<=5) {            /*���ƻ���*/
			b=1;
			while (b<=a) {        /*����ÿ��10���Ǻ�*/
				printf("*");
				b=b+1;
			}
			printf("\n");
			a=a+1;
		}
	}

