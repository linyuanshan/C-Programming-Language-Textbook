	#include <stdio.h>
	#include <stdlib.h>
	int main(){
	    int i,N;
	    unsigned int result=1;
	    printf("�����������׳˵���������\n");
	    scanf("%d",&N);
	    for(i=N;i>=1;--i)
	    {
	        result=result*i;
	    }
	    printf("%d!=%d\n",N,result);
	    return 0;
	}

