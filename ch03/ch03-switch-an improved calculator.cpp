	#include"stdio.h"
	int main(){
	  int option;
	  float x, y, z;
	  char c;
	  float a, b;
	  int n;
	  printf("�������������(0-�������㣬1-�˷�����)��");
	  scanf("%d", &option);
	  switch(option)  {
	    case 0:
	      printf("������Ҫ�����ʽ��");
	      scanf("%f%c%f",&x,&c,&y);
	      switch(c){
	        case '+': z=x+y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        case '-': z=x-y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        case '*': z=x*y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        case '/': z=x/y;  printf("%f%c%f=%f", x, c, y, z);  break;
	        default: printf("���������");
	      }
	      break;
	    case 1:
	      printf("�����������ָ��(0-3)��");
	      scanf("%f%d", &a, &n);
	      switch(n){
	        case 0: b = 1; printf("%f\n", b); break;
	        case 1: b = a; printf("%f\n", b); break;
	        case 2: b = a * a; printf("%f\n", b); break;
	        case 3: b = a * a * a; printf("%f\n", b); break;
	        default: printf("ָ���������\n");
	      }
	      break;
	  }
	}

