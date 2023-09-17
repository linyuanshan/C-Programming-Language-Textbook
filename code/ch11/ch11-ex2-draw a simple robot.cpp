#include <stdio.h>
#include <graphics.h>  /* 为了使用EGE图形库，需要包含此头文件 */
int main()
{
    initgraph(800, 600);        /* 对图形窗口初始化，参数为窗口大小 */ 
    setbkcolor(EGERGB(180, 80, 20));     /* 设置画布背景色 */
    setfillcolor(EGERGB(255, 255, 255));  /* 设置填充颜色 */
    fillellipse(400, 500, 25, 50);          /* 绘制大白机器人身体 */
    getch();   /* 防止图形窗口立刻消失 */
    return 0;
}

