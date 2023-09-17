#include <stdio.h>
#include <graphics.h>      /* 为了使用EGE图形库，需要包含此头文件 */
/* 定义以下一些描述机器人尺寸的常量 */
const int RB_BODY_H = 50;   /* 等价于#define RB_BODY_H  50 */
const int RB_BODY_W = 25;   /* 等价于#define RB_BODY_W  25 */
const int RB_HEAD_H = 15;   /* 等价于#define RB_HEAD_H  15 */
int main(){
  initgraph(1000, 700);    /* 对图形窗口初始化，参数为窗口大小*/ 
  setbkcolor(EGERGB(180, 80, 20));     /* 设置画布背景色 */
  int iRobot_x, iRobot_y;    /* 定义变量存储机器人的位置 */
  iRobot_x = 500;
  iRobot_y = 50;
  while(1) {	
    cleardevice();            /* 清除画面 */
    // 1.绘制机器人
    setfillcolor(EGERGB(255, 255, 255));          /* 设置填充颜色  */
    fillellipse(iRobot_x, iRobot_y, RB_BODY_W, RB_BODY_H);/*绘制身体*/
    fillellipse(iRobot_x, iRobot_y-RB_BODY_H, 0.7*RB_BODY_W, 
0.3*RB_BODY_H);
    /* 绘制头部  */
    setfillcolor(EGERGB(0, 0, 0));    /* 绘制机器人眼睛  */
    fillellipse(iRobot_x-0.3*RB_BODY_W, iRobot_y-RB_BODY_H, 4, 4);
    fillellipse(iRobot_x+0.3*RB_BODY_W, iRobot_y-RB_BODY_H, 4, 4);	
    setcolor(EGERGB(0, 0, 0));
    line(iRobot_x-0.3*RB_BODY_W, iRobot_y-RB_BODY_H, 
iRobot_x+0.3*RB_BODY_W, iRobot_y-RB_BODY_H);
/* 2.更新位置，向X轴正向移动3个像素，向Y轴正向移动2个像素 */
    iRobot_x = iRobot_x + 3;
    iRobot_y = iRobot_y + 2;    
    delay_fps(30);             /* 让画面每秒钟画30幅画  */
  }
  getch();         /* 防止让图形窗口马上消失  */
  return 0;
}


