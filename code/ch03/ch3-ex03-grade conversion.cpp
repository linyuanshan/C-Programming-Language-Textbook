	#include<stdio.h>
	int main(){
		int score;
	    printf("��������ĳɼ�:");
		scanf("%d",&score);
		if(score>=90)
			printf("��ĳɼ�ΪA����\n");
		else if(score>=80)
			printf("��ĳɼ�ΪB����\n");
		else if(score>=70)
			printf("��ĳɼ�ΪC����\n");
		else if(score>=60)
			printf("��ĳɼ�ΪP����\n");
		else
			printf("��ĳɼ�ΪF����\n");
	    return 0;
	}
