#include <stdio.h>
/*
由于枚举类型在C语言和C++中用法有别，
所以此文件必须建立成C语言源文件 即扩展名为.c 
*/
enum Status {Sun , Zoning ,Exhausted ,Happy , Thinking , Broken ,
            Fighting ,Lucky , Emo , Studying , Busy, Shopping};
void display(enum Status c);
int main()
{
    int status[32]={0},choice;
    enum Status c;
    printf("1.等天晴\t2.发呆    \t3.疲惫\n");
    printf("4.美滋滋\t5.胡思乱想\t6.裂开\n");
    printf("7.冲    \t8.求锦鲤  \t9.emo\n");
    printf("10.学习 \t11.忙     \t12.购物\n");
    printf("请选择你的状态（以0结束）:\n");
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
    printf("你的状态是：");
    for(c=Sun;c<=Shopping;c++)
        if(status[c]==1)
            display(c);
    return 0;
}
void display(enum Status c)
{
    switch(c)
    {
        case Sun      :printf("等天晴\t");break;
        case Zoning   :printf("发呆\t");break;
        case Exhausted:printf("疲惫\t");break;
        case Happy    :printf("美滋滋\t");break;
        case Thinking :printf("胡思乱想\t");break;
        case Broken   :printf("裂开\t");break;
        case Fighting :printf("冲\t");break;
        case Lucky    :printf("求锦鲤\t");break;
        case Emo      :printf("emo\t");break;
        case Studying :printf("学习\t");break;
        case Busy     :printf("忙\t");break;
        case Shopping :printf("购物\t");break;
    }
}


