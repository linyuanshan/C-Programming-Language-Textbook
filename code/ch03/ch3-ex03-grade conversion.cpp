	#include<stdio.h>
	int main(){
		int score;
	    printf("请输入你的成绩:");
		scanf("%d",&score);
		if(score>=90)
			printf("你的成绩为A级！\n");
		else if(score>=80)
			printf("你的成绩为B级！\n");
		else if(score>=70)
			printf("你的成绩为C级！\n");
		else if(score>=60)
			printf("你的成绩为P级！\n");
		else
			printf("你的成绩为F级！\n");
	    return 0;
	}
