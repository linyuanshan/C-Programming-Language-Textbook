	#include <stdio.h>
	int main(){
	  float fSale, fCommission, fRate; 
	  printf("������ҵ��Ա���µ����۶��Ԫ����");
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
	  printf("��ҵ��Ա���µ���ɽ��Ϊ�� %f��Ԫ\n", fCommission);
	  return 0;
	}

