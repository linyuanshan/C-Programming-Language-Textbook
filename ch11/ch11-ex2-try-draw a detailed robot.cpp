#include <stdio.h>
// 为了使用EGE图形库，需要包含如下头文件 
#include <graphics.h>

int main()
{
	initgraph(800, 600);                 // 对图形窗口初始化，参数为窗口大小 
	setbkcolor(EGERGB(180, 80, 20));      // 设置画布背景色 
	
	int robot_x, robot_y;
	robot_x = 400;
	robot_y = 500;
	
	setfillcolor(EGERGB(255, 255, 255));          // 设置填充颜色 
	fillellipse(robot_x, robot_y, 25, 50);        // 绘制大白机器人身体 
	fillellipse(robot_x, robot_y-50, 18, 15);     // 绘制大白机器人头部 
	setfillcolor(EGERGB(0, 0, 0));                // 绘制大白机器人眼睛 
	fillellipse(robot_x-8, robot_y-50, 4, 4);
	fillellipse(robot_x+8, robot_y-50, 4, 4);	
	setcolor(EGERGB(0, 0, 0));
	line(robot_x-8, robot_y-50, robot_x+8, robot_y-50);

	getch();                             // 让图形窗口不马上消失 
	return 0;
}
