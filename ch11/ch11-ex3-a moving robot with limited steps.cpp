#include <stdio.h>
#include <graphics.h>  /* 为了使用EGE图形库，需要包含此头文件 */
int main(){
    initgraph(800, 600);        /* 对图形窗口初始化，参数为窗口大小 */ 
    setbkcolor(EGERGB(180, 80, 20));     /* 设置画布背景色 */
    int iRobot_x, iRobot_y;     /* 存储机器人的位置x、y坐标 */
    iRobot_x = 400;
    iRobot_y = 100;
    for(int i = 0; i < 100; i++){
        cleardevice();            /* 清除画面 */
        setfillcolor(EGERGB(255, 255, 255));     /* 设置填充颜色 */
        fillellipse(iRobot_x, iRobot_y, 25, 50);  /* 绘制大白机器人身体 */
        fillellipse(iRobot_x, iRobot_y-50, 18, 15); /* 绘制大白机器人头部 */
        setfillcolor(EGERGB(0, 0, 0));           /* 绘制大白机器人眼睛 */
        fillellipse(iRobot_x-8, iRobot_y-50, 4, 4);
        fillellipse(iRobot_x+8, iRobot_y-50, 4, 4);	
        setcolor(EGERGB(0, 0, 0));              /* 绘制大白嘴巴 */
        line(iRobot_x-8, iRobot_y-50, iRobot_x+8, iRobot_y-50);
        iRobot_y = iRobot_y + 5;      /* 更新机器人y坐标值 */
	    delay_fps(30);             /* 让画面每秒钟画30幅画 */
    }
    getch();   /* 防止图形窗口立刻消失 */
    return 0;
}

