#include <stdio.h>
void power2(int set[],int n);
int main() {
		int i,set[20];
		power2(set,20);
		for(i=0;i<20;i++)
			printf("%10d",set[i]);
		return 0;
}
void power2(int set[],int n){
		int i=1;
		set[0]=1;
		while(i<=n)	{
			set[i]=set[i-1]<<1;
			i++;
		}
}


