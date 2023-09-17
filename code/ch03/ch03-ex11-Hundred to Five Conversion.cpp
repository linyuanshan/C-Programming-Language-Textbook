	#include <stdio.h>
	int main( ){
	  int score;
	  char grade;
	  printf("请输入考试成绩\n");
	  scanf("%d",&score);
	  grade=score>=90?'A':score>=80?'B':score>=70?'C':score>=60?'P':'F';
	  printf("成绩级别为：%c\n",grade);
	  return 0;
	}

