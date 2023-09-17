	#include <stdio.h>
	int main(){
	    int iLen, iWid;
	    printf("«Î ‰»Î≥§∫ÕøÌ£∫");
	    scanf("%d%d", &iLen, &iWid);
	  for (int i = 0; i < iWid; i++){
	        for (int j = 0; j < iLen; j++)
	            printf("*");
	        printf("\n");
	    }
	    return 0;
	}

