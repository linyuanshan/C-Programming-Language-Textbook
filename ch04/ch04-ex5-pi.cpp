	#include"stdio.h"
	main( ){	
	  int n=1,t=1;
	  float pi=0;
	  while(1.0/n>=1e-4) {     /*����ѭ���������ǵ�ǰ��ľ���*/
		 pi+=t*1.0/n;              	/*����ǰ���ۼӵ�pi��*/
		 t=-t;                       	/*�õ���һ��ķ���*/
		 n+=2;                      /*�õ���һ��ķ�ĸ*/
	  }
	 printf("pi=%f\n",4*pi);
	}

