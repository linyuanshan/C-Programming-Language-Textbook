	#include"stdio.h"
	int main(){
	  float x,y,z;
	  char c;
	  printf("������Ҫ�����ʽ�ӣ�");
	  scanf("%f%c%f", &x, &c, &y);
	  switch(c){
	    case '+': z = x + y; printf("%f%c%f=%f", x, c, y, z); break;
	    case '-': z = x - y; printf("%f%c%f=%f", x, c, y, z); break;
	    case '*': z = x * y; printf("%f%c%f=%f", x, c, y, z); break;
	    case '/': z = x / y; printf("%f%c%f=%f", x, c, y, z); break;
	    default: printf("���������\n");
  }
	return 0;
	}

