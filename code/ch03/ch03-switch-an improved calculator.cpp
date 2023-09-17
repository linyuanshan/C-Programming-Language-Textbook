	#include"stdio.h"
	int main(){
	  int option;
	  float x, y, z;
	  char c;
	  float a, b;
	  int n;
	  printf("请输入计算类型(0-四则运算，1-乘方运算)：");
	  scanf("%d", &option);
	  switch(option)  {
	    case 0:
	      printf("请输入要计算的式子");
	      scanf("%f%c%f",&x,&c,&y);
	      switch(c){
	        case '+': z=x+y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        case '-': z=x-y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        case '*': z=x*y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        case '/': z=x/y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        default: printf("运算符错误！");
	      }
	      break;
	    case 1:
	      printf("请输入底数和指数(0-3)：");
	      scanf("%f%d", &a, &n);
	      switch(n){
	        case 0: b = 1; printf("%f\n", b); break;
	        case 1: b = a; printf("%f\n", b); break;
	        case 2: b = a * a; printf("%f\n", b); break;
	        case 3: b = a * a * a; printf("%f\n", b); break;
	        default: printf("指数输入错误！\n");
	      }
	      break;
	  }
	}

