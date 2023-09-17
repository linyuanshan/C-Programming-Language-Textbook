	#include <stdio.h>
	int main(){
	  float fSale, fCommission, fRate; 
	  printf("请输入业务员本月的销售额（万元）：");
	  scanf("%f", &fSale);
	  int iC = (int)fSale / 10;
	  switch(iC){
	    case 0:
	      fRate = 0.05;
	      break;
	    case 1:
	      fRate = 0.08;
	      break;
	    case 2:
	    case 3:
	      fRate = 0.1;
	     break;
	   default:
	      fRate = 0.12;
	      break;
	  }
	  fCommission = fSale * fRate;
	  printf("该业务员本月的提成金额为： %f万元\n", fCommission);
	  return 0;
	}

