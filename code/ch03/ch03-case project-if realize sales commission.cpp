	#include <stdio.h>
	int main(){
	float fSale, fCommission, fRate;
	printf("请输入业务员本月的销售额（万元）：");
	scanf("%f", &fSale);
	if(fSale < 10)
	    fRate = 0.05;
	else if(fSale < 20)
	    fRate = 0.08;
	else if(fSale < 40)
	    fRate = 0.1;
	else
	    fRate = 0.12;
	  fCommission = fSale * fRate;
	printf("该业务员本月的提成金额为： %f万元\n", fCommission);
	  return 0;
	}

