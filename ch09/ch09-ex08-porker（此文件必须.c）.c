#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Decor {Spade,Heart,Diamond,Club};
/*初始化扑克*/
void initPorker(int *porker);
/*显示下标为index的牌*/
void displayPorker(int porker[],int index);
int main(){
    /*porker存放每张牌，flag记录对应下标牌是否发出*/
    int porker[54],flag[54]={0};
    /*四个人每人牌面，方便起见在牌序号对应下标处标记*/
    /*因为只是标记，所以定义char类型更节省空间*/
    char person[4][54]={0};
    int iPoints,c=0,onePorker,j;
    initPorker(porker);
    /*设定随机数产生与系统时钟关联*/
    srand(time(NULL));
    for(c=0;c<54;c++)
    {
        while(1){
            /*随机取到一张牌没有发出的牌*/
            onePorker=rand()%54;
            if(flag[onePorker]==0){
                flag[onePorker]=1;break;
            }
        }
        /*取到的牌分别发给4个人*/
        person[c%4][onePorker]=1;
    }
    for(c=0;c<4;c++){
        printf("\n第%d个人的牌为：\n",c+1);
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
    porker[52]=0; /*小王*/
    porker[53]=1; /*大王*/
}
void displayPorker(int porker[],int index)
{
    int iPoints;
    if(porker[index]==0)
        printf("小王\t");
    else if(porker[index]==1)
        printf("大王\t");
    else{
        iPoints=porker[index]>>4;
        switch(porker[index]&0xf){
            case Spade  :printf("黑桃");break;
            case Heart  :printf("红桃");break;
            case Diamond:printf("方块");break;
            case Club   :printf("梅花");break;
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


