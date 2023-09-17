	#include "stdio.h"
	main() {
		int m,i;
		scanf("%d",&m);
		for(i=2; i<=m-1; i++)
			if(m%i==0)break;
		if(i>=m) printf("Yes");
		else printf("No");
	}

