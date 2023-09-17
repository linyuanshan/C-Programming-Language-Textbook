	#include <stdio.h>
	int main(){
	    float fGoal;
	    float fTotal, fDonation;
	    printf("请输入本次募捐的目标金额：");
	    scanf("%f", &fGoal);
	    fTotal = 0.0;
	    while( fTotal < fGoal )    {
	        printf("请输入您的爱心：");
	        scanf("%f", &fDonation);
	        fTotal += fDonation;
	        printf("--谢谢您的帮助！目前募捐已完成 %.2f / %.2f\n", fTotal, fGoal);
	    }
	    printf("募捐目标已达到！\n");
	    return 0;
	}

