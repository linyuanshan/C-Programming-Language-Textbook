	#include <stdio.h>
	int main(){
	    float fGoal;
	    float fTotal, fDonation;
	    printf("�����뱾��ļ���Ŀ���");
	    scanf("%f", &fGoal);
	    fTotal = 0.0;
	    while( fTotal < fGoal )    {
	        printf("���������İ��ģ�");
	        scanf("%f", &fDonation);
	        fTotal += fDonation;
	        printf("--лл���İ�����Ŀǰļ������� %.2f / %.2f\n", fTotal, fGoal);
	    }
	    printf("ļ��Ŀ���Ѵﵽ��\n");
	    return 0;
	}

