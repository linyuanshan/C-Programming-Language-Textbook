	#include <stdio.h>
	int main( ){
	  int score;
	  char grade;
	  printf("�����뿼�Գɼ�\n");
	  scanf("%d",&score);
	  grade=score>=90?'A':score>=80?'B':score>=70?'C':score>=60?'P':'F';
	  printf("�ɼ�����Ϊ��%c\n",grade);
	  return 0;
	}

