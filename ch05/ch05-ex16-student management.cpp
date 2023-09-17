#include <stdio.h>
#include <stdlib.h>
#define MAXSTUNUM 1001
int main()
{
    int scores[MAXSTUNUM][5];
    int choice;                     //����ѡ��
    int stu_num=0;                  //ʵ��ѧ������
    int id,math,English,clanguage;  //���Ƴɼ�
    int imax,imin;                  //ÿ����߷ֺ���ͷ�
    int pass_count;                 //ÿ�Ƽ�������
    double pass_rate;               //������
    double fave;
    int i,j,k;
    printf("*****************ѧ���ɼ�����ϵͳ*****************\n");
    printf("\t\t1���ɼ����\n");
    printf("\t\t2���ɼ����\n");
    printf("\t\t3���ɼ���ѯ\n");
    printf("\t\t4���ɼ�ͳ��\n");
    printf("\t\t5���ɼ�����\n");
    printf("\t\t6���ɼ�ɾ��\n");
    printf("\t\t7���ɼ��޸�\n");
    printf("\t\t8���ɼ���ѧ������\n");
    printf("\t\t0���˳�ϵͳ\n");
    printf("**************************************************\n");
    while(1)
    {
        printf("\n��ѡ���ܣ�");
        scanf("%d",&choice);
        if(choice==0)
            break;
        switch(choice)
        {
        case 1:
            printf("*****************1���ɼ����******************\n");
            printf("����������ѧ��ѧ�š�������Ӣ�C���Գɼ���\n");
            printf("(ѧ������-1��ʾ�������)\n");
            while(1)
            {
                scanf("%d",&id);
                if(id!=-1)
                {
                    scores[stu_num][0]=id;
                    scanf("%d%d%d",&math,&English,&clanguage);
                    scores[stu_num][1]=math;
                    scores[stu_num][2]=English;
                    scores[stu_num][3]=clanguage;
                    scores[stu_num][4]=math+English+clanguage;
                    stu_num++;
                }
                else
                {
                    printf("*****************�ɼ���ӽ���*****************\n");
                    break;
                }
            }
            break;
        case 2:
            printf("*****************2���ɼ����******************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                printf("ѧ��\t����\tӢ��\tC����\t�ܷ�\n");
                for(i=0;i<stu_num;i++)
                {
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
            }
            printf("*****************�ɼ��������*****************\n");
            break;
        case 3:
            printf("*****************3���ɼ���ѯ******************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                printf("������Ҫ��ѯѧ��ѧ�ţ�");
                scanf("%d",&id);
                for(i=0;i<stu_num;i++)
                {
                    if(scores[i][0]==id)
                        break;
                }
                if(i<stu_num)
                {
                    printf("ѧ��\t����\tӢ��\tC����\t�ܷ�\n");
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
                else
                    printf("ѧ��%d�����ڣ�\n",id);
            }
            printf("*****************�ɼ���ѯ����*****************\n");
            break;
        case 4:
            printf("*****************4���ɼ�ͳ��******************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                for(j=1;j<4;j++)
                {
                    imax=scores[0][j];
                    imin=scores[0][j];
                    pass_count=0;
                    fave=0;
                    for(i=0;i<stu_num;i++)
                    {
                        if(imax<scores[i][j])
                            imax=scores[i][j];
                        if(imin>scores[i][j])
                            imin=scores[i][j];
                        if(scores[i][j]>=60)
                            pass_count++;
                        fave+=scores[i][j];
                    }
                    switch(j)
                    {
                        case 1:printf("��ѧ");break;
                        case 2:printf("Ӣ��");break;
                        case 3:printf("C���Գ������");break;
                    }
                    fave/=stu_num;
                    printf("��߷�%d,��ͷ�%d,ƽ����%.1f,������%d%%\n",
                           imax,imin,fave,pass_count*100/stu_num);
                }
            }
            printf("*****************�ɼ�ͳ�ƽ���*****************\n");
            break;
        case 5:
            printf("*****************5���ɼ�����******************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                for(i=0;i<stu_num-1;i++)
                {
                    k=i;
                    for(j=i+1;j<stu_num;j++)
                        if(scores[k][4]<scores[j][4])
                            k=j;
                    for(j=0;j<5;j++)
                    {
                        int tmp=scores[i][j];
                        scores[i][j]=scores[k][j];
                        scores[k][j]=tmp;
                    }
                }
                printf("����\tѧ��\t����\tӢ��\tC����\t�ܷ�\n");
                int rand=1;
                for(i=0;i<stu_num;i++)
                {
                    if(i>0 && scores[i-1][4]!=scores[i][4])
                        rand=i+1;
                    printf("%d\t",rand);
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
                printf("*****************�ɼ���������*****************\n");
                break;
            }
        case 6:
            printf("*****************6���ɼ�ɾ��******************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                printf("������Ҫɾ��ѧ��ѧ�ţ�");
                scanf("%d",&id);
                for(i=0;i<stu_num;i++)
                {
                    if(scores[i][0]==id)
                        break;
                }
                if(i<stu_num)
                {
                    for(k=i;k<stu_num-1;k++)
                        for(j=0;j<5;j++)
                            scores[k][j]=scores[k+1][j];
                    stu_num--;
                }
                else
                    printf("ѧ��%d�����ڣ�\n",id);
            }
            printf("*****************�ɼ�ɾ������*****************\n");
            break;
        case 7:
            printf("*****************7���ɼ��޸�******************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                printf("������Ҫ�޸�ѧ��ѧ�ţ�");
                scanf("%d",&id);
                for(i=0;i<stu_num;i++)
                {
                    if(scores[i][0]==id)
                        break;
                }
                if(i<stu_num)
                {
                    printf("������Ҫ�޸�ѧ����ѧ�š�����ѧ��Ӣ�C���Գɼ���\n");
                    scanf("%d%d%d%d",&id,&math,&English,&clanguage);
                    scores[i][0]=id;
                    scores[i][1]=math;
                    scores[i][2]=English;
                    scores[i][3]=clanguage;
                    scores[i][4]=math+English+clanguage;
                }
                else
                    printf("ѧ��%d�����ڣ�\n",id);
            }
            printf("*****************�ɼ��޸Ľ���*****************\n");
            break;
        case 8:
            printf("*****************8���ɼ���ѧ������************\n");
            if(stu_num==0)
                printf("û�гɼ����ݣ�\n");
            else
            {
                for(i=0;i<stu_num-1;i++)
                {
                    k=i;
                    for(j=i+1;j<stu_num;j++)
                        if(scores[k][0]>scores[j][0])
                            k=j;
                    for(j=0;j<5;j++)
                    {
                        int tmp=scores[i][j];
                        scores[i][j]=scores[k][j];
                        scores[k][j]=tmp;
                    }
                }
                printf("ѧ��\t����\tӢ��\tC����\t�ܷ�\n");
                for(i=0;i<stu_num;i++)
                {
                    for(j=0;j<5;j++)
                        printf("%d\t",scores[i][j]);
                    printf("\n");
                }
                printf("*****************�ɼ���ѧ���������***********\n");
                break;
            }
        }
    }
    return 0;
}


