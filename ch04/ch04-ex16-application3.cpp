	#include"stdio.h"
	main( ) {
		int s,sum,n;
		float average;
		n=0;
		sum=0;
		scanf("%d",&s);                  	/*�����û�����һ���ɼ�*/
		while (s>=0) {                  	/*���ɼ����ڵ�����ʱ������ѭ��*/
			sum=sum+s;                 	/*�ۼ�*/
			n++;                     	/*����*/
			scanf("%d",&s);
		}
		average=sum/(float)n;
		printf("sum=%d,average=%f\n",sum,average);
	}

