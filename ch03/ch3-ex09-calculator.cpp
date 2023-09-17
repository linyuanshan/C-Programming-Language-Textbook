	#include"stdio.h"
	int main(){
	  float x,y,z;
	  char c;
	  printf("请输入要计算的式子：");
	  scanf("%f%c%f", &x, &c, &y);
	  switch(c){
	    case '+': z = x + y; printf("%f%c%f=%f", x, c, y, z); break;
	    case '-': z = x - y; printf("%f%c%f=%f", x, c, y, z); break;
	    case '*': z = x * y; printf("%f%c%f=%f", x, c, y, z); break;
	    case '/': z = x / y; printf("%f%c%f=%f", x, c, y, z); break;
	    default: printf("运算符错误！\n");
  }
	return 0;
	}

