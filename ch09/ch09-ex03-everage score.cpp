#include <stdio.h>
#define M 10

enum Grade {A=95,B=85,C=75,D=65,E=50};
int main(int argc, char *argv[]) {
	enum Grade grade[M];
	int i,sum=0,ave,count=M;
	char ch;
	printf("请输入%d个学生等级（不用使用分隔其他字符分隔）\n",M);
	printf("A.优秀；B.良好；C.中等；D.及格；E.不及格：\n");
	for(i=0;i<M;i++){
		scanf("%c",&ch);
		switch(ch){
			case 'A':case 'a':grade[i]=A;break;
			case 'B':case 'b':grade[i]=B;break;
			case 'C':case 'c':grade[i]=C;break;
			case 'D':case 'd':grade[i]=D;break;
			case 'E':case 'e':grade[i]=E;break;
			default:
				printf("第%d个成绩有误,平均分没有计入\n",i+1);
				count--;
				break;
		}		
	}
	for(i=0;i<M;i++){
		sum+=grade[i];
	}
	ave=sum/count;	
	printf("共%d个有效成绩，平均分为%d\n",count,ave);	
	return 0;
}


