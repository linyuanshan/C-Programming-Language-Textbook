#include <stdio.h>
/*
����ö��������C���Ժ�C++���÷��б�
���Դ��ļ����뽨����C����Դ�ļ� ����չ��Ϊ.c 
*/
enum Status {Sun , Zoning ,Exhausted ,Happy , Thinking , Broken ,
            Fighting ,Lucky , Emo , Studying , Busy, Shopping};
void display(enum Status c);
int main()
{
    int status[32]={0},choice;
    enum Status c;
    printf("1.������\t2.����    \t3.ƣ��\n");
    printf("4.������\t5.��˼����\t6.�ѿ�\n");
    printf("7.��    \t8.�����  \t9.emo\n");
    printf("10.ѧϰ \t11.æ     \t12.����\n");
    printf("��ѡ�����״̬����0������:\n");
    scanf("%d",&choice);
    while(choice!=0)
    {
        switch(choice)
        {
            case 1 :status[Sun]=1;break;
            case 2 :status[Zoning]=1;break;
            case 3 :status[Exhausted]=1;break;
            case 4 :status[Happy]=1;break;
            case 5 :status[Thinking]=1;break;
            case 6 :status[Broken]=1;break;
            case 7 :status[Fighting]=1;break;
            case 8 :status[Lucky]=1;break;
            case 9 :status[Emo]=1;break;
            case 10:status[Studying]=1;break;
            case 11:status[Busy]=1;break;
            case 12:status[Shopping]=1;break;
        }
        scanf("%d",&choice);
    }
    printf("���״̬�ǣ�");
    for(c=Sun;c<=Shopping;c++)
        if(status[c]==1)
            display(c);
    return 0;
}
void display(enum Status c)
{
    switch(c)
    {
        case Sun      :printf("������\t");break;
        case Zoning   :printf("����\t");break;
        case Exhausted:printf("ƣ��\t");break;
        case Happy    :printf("������\t");break;
        case Thinking :printf("��˼����\t");break;
        case Broken   :printf("�ѿ�\t");break;
        case Fighting :printf("��\t");break;
        case Lucky    :printf("�����\t");break;
        case Emo      :printf("emo\t");break;
        case Studying :printf("ѧϰ\t");break;
        case Busy     :printf("æ\t");break;
        case Shopping :printf("����\t");break;
    }
}


