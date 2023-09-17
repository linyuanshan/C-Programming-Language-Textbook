	#include"stdio.h"
	main( ){	
	  int n=1,t=1;
	  float pi=0;
	  while(1.0/n>=1e-4) {     /*控制循环的条件是当前项的精度*/
		 pi+=t*1.0/n;              	/*将当前项累加到pi中*/
		 t=-t;                       	/*得到下一项的符号*/
		 n+=2;                      /*得到下一项的分母*/
	  }
	 printf("pi=%f\n",4*pi);
	}

