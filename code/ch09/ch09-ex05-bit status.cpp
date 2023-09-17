#include <stdio.h>
void setStatus(int *pst,int choice);
void display(int status);
int main(){
    int status=0,choice;
    printf("1.������\t2.����    \t3.ƣ��\n");
    printf("4.������\t5.��˼����\t6.�ѿ�\n");
    printf("7.��    \t8.�����  \t9.emo\n");
    printf("10.ѧϰ \t11.æ     \t12.����\n");
    printf("��ѡ�����״̬����0������:\n");
    scanf("%d",&choice);
    while(choice!=0)
    {
        setStatus(&status,choice-1);
        scanf("%d",&choice);
    }
    printf("���״̬�ǣ�");
    display(status);
    return 0;
}
void setStatus(int *pst,int choice)
{
    int set[32]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    *pst=*pst|set[choice];
}
void display(int status)
{
    int set[32]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    int c,i;
    for(i=0;i<12;i++)
    {
        c=status&set[i];
        switch(c)
        {
            case 1   :printf("������\t");break;
            case 2   :printf("����\t");break;
            case 4   :printf("ƣ��\t");break;
            case 8   :printf("������\t");break;
            case 16  :printf("��˼����\t");break;
            case 32  :printf("�ѿ�\t");break;
            case 64  :printf("��\t");break;
            case 128 :printf("�����\t");break;
            case 256 :printf("emo\t");break;
            case 512 :printf("ѧϰ\t");break;
            case 1024:printf("æ\t");break;
            case 2048:printf("����\t");break;
        }
    }
}


