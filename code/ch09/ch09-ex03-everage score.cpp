#include <stdio.h>
#define M 10

enum Grade {A=95,B=85,C=75,D=65,E=50};
int main(int argc, char *argv[]) {
	enum Grade grade[M];
	int i,sum=0,ave,count=M;
	char ch;
	printf("������%d��ѧ���ȼ�������ʹ�÷ָ������ַ��ָ���\n",M);
	printf("A.���㣻B.���ã�C.�еȣ�D.����E.������\n");
	for(i=0;i<M;i++){
		scanf("%c",&ch);
		switch(ch){
			case 'A':case 'a':grade[i]=A;break;
			case 'B':case 'b':grade[i]=B;break;
			case 'C':case 'c':grade[i]=C;break;
			case 'D':case 'd':grade[i]=D;break;
			case 'E':case 'e':grade[i]=E;break;
			default:
				printf("��%d���ɼ�����,ƽ����û�м���\n",i+1);
				count--;
				break;
		}		
	}
	for(i=0;i<M;i++){
		sum+=grade[i];
	}
	ave=sum/count;	
	printf("��%d����Ч�ɼ���ƽ����Ϊ%d\n",count,ave);	
	return 0;
}


