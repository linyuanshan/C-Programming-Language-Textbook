	#include <stdio.h>
	int main(){
	float fSale, fCommission, fRate;
	printf("������ҵ��Ա���µ����۶��Ԫ����");
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
	printf("��ҵ��Ա���µ���ɽ��Ϊ�� %f��Ԫ\n", fCommission);
	  return 0;
	}

