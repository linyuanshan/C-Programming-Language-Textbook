#include <stdio.h>
#include <stdlib.h>
void exam(void (*qz)(void));
void poem();
void prose();
void ci();
int main()
{
    int choice;
    while(1){
        printf("请输入考题类型：1.诗，2.词，3.古文，0.退出\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:exam(poem);break;
            case 2:exam(ci);break;
            case 3:exam(prose);break;
            case 0:exit(0);
        }
    }
    return 0;
}
void exam(void (*qz)(void))
{
    printf("考试前准备……\n");
    printf("显示题目：\n");
    (*qz)();
    printf("答题中……\n");
    printf("考试结束\n");
}
void poem()
{
    printf("终南别业\n");
    printf("【唐】王维\n");
    printf("中岁颇好道，晚家南山陲。\n");
    printf("兴来每独往，胜事空自知。\n");
    printf("行到水穷处，坐看云起时。\n");
    printf("偶然值林叟，谈笑无还期。\n");
}
void prose()
{
    printf("陋室铭\n");
    printf("【唐】刘禹锡\n");
    printf("山不在高，有仙则名。\n");
    printf("水不在深，有龙则灵。\n");
    printf("斯是陋室，惟吾德馨。\n");
    printf("苔痕上阶绿，草色入帘青。\n");
    printf("谈笑有鸿儒，往来无白丁。\n");
    printf("可以调素琴，阅金经。\n");
    printf("无丝竹之乱耳，无案牍之劳形。\n");
    printf("南阳诸葛庐，西蜀子云亭。\n");
    printf("孔子云：何陋之有？\n");
}
void ci()
{
    printf("如梦令\n");
    printf("【宋】李清照\n");
    printf("常记溪亭日暮，沉醉不知归路。\n");
    printf("兴尽晚回舟，误入藕花深处。\n");
    printf("争渡，争渡，惊起一滩鸥鹭。\n");
}


