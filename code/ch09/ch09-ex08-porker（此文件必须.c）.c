#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Decor {Spade,Heart,Diamond,Club};
/*��ʼ���˿�*/
void initPorker(int *porker);
/*��ʾ�±�Ϊindex����*/
void displayPorker(int porker[],int index);
int main(){
    /*porker���ÿ���ƣ�flag��¼��Ӧ�±����Ƿ񷢳�*/
    int porker[54],flag[54]={0};
    /*�ĸ���ÿ�����棬�������������Ŷ�Ӧ�±괦���*/
    /*��Ϊֻ�Ǳ�ǣ����Զ���char���͸���ʡ�ռ�*/
    char person[4][54]={0};
    int iPoints,c=0,onePorker,j;
    initPorker(porker);
    /*�趨�����������ϵͳʱ�ӹ���*/
    srand(time(NULL));
    for(c=0;c<54;c++)
    {
        while(1){
            /*���ȡ��һ����û�з�������*/
            onePorker=rand()%54;
            if(flag[onePorker]==0){
                flag[onePorker]=1;break;
            }
        }
        /*ȡ�����Ʒֱ𷢸�4����*/
        person[c%4][onePorker]=1;
    }
    for(c=0;c<4;c++){
        printf("\n��%d���˵���Ϊ��\n",c+1);
        for(j=0;j<54;j++)
            if(person[c][j]==1){
                displayPorker(porker,j);
            }
    }
    return 0;
}
void initPorker(int *porker){
    enum Decor eDecor;
    int iPoints,c=0;
    for(iPoints=1;iPoints<=13;iPoints++)
        for(eDecor=Spade;eDecor<=Club;eDecor++)
            porker[c++]=(iPoints<<4)+eDecor;
    porker[52]=0; /*С��*/
    porker[53]=1; /*����*/
}
void displayPorker(int porker[],int index)
{
    int iPoints;
    if(porker[index]==0)
        printf("С��\t");
    else if(porker[index]==1)
        printf("����\t");
    else{
        iPoints=porker[index]>>4;
        switch(porker[index]&0xf){
            case Spade  :printf("����");break;
            case Heart  :printf("����");break;
            case Diamond:printf("����");break;
            case Club   :printf("÷��");break;
            }
        if(iPoints>=2 && iPoints<=10)
            printf("%d\t",iPoints);
        else
            switch(iPoints){
                case 1 :printf("A\t");break;
                case 11:printf("J\t");break;
                case 12:printf("Q\t");break;
                case 13:printf("K\t");break;
                }
        }
}


