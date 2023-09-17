	#include"stdio.h"
	main( ){
	  int n,count=0;
	  for(n=100;n<=200;n++)	{
		    if (n%7==0) 
	        continue;
	        printf("%d",n);
	        count++;
	        if(count%10==0)
			printf("\n");  
	    }
	 }

