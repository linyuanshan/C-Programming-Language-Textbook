	#include <stdio.h>
	int main()
	  {
		char c='a';
		int i=3,j=4,k=5;
		float x=2e+5,y=0.3;
		printf("%d,%d\n",!x*!y,!!!x);
		printf("%d,%d\n",x||i&&j-3, i<j&&x<y);
		printf("%d,%d\n",i==5&&c&&(j=8),x+y||i+j+k);
	    return 0;
	  }

