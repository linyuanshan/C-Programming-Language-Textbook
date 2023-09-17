	#include <stdio.h>
	int main( ){
	    int  k,x,max;
	    max=-999999;
	    for(k=1; k<=10; k++)
	    {
	        scanf("%d", &x);
	        if (x>=max)
	            max=x;
	    }
	    printf("Max=%d\n", max);
	    return 0;
	}

