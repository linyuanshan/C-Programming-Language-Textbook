#include <stdio.h>
void setStatus(int *pst,int choice);
void display(int status);
int main(){
    int status=0,choice;
    printf("1.等天晴\t2.发呆    \t3.疲惫\n");
    printf("4.美滋滋\t5.胡思乱想\t6.裂开\n");
    printf("7.冲    \t8.求锦鲤  \t9.emo\n");
    printf("10.学习 \t11.忙     \t12.购物\n");
    printf("请选择你的状态（以0结束）:\n");
    scanf("%d",&choice);
    while(choice!=0)
    {
        setStatus(&status,choice-1);
        scanf("%d",&choice);
    }
    printf("你的状态是：");
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
            case 1   :printf("等天晴\t");break;
            case 2   :printf("发呆\t");break;
            case 4   :printf("疲惫\t");break;
            case 8   :printf("美滋滋\t");break;
            case 16  :printf("胡思乱想\t");break;
            case 32  :printf("裂开\t");break;
            case 64  :printf("冲\t");break;
            case 128 :printf("求锦鲤\t");break;
            case 256 :printf("emo\t");break;
            case 512 :printf("学习\t");break;
            case 1024:printf("忙\t");break;
            case 2048:printf("购物\t");break;
        }
    }
}


