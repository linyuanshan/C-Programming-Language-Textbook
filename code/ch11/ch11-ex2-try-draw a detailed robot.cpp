#include <stdio.h>
// Ϊ��ʹ��EGEͼ�ο⣬��Ҫ��������ͷ�ļ� 
#include <graphics.h>

int main()
{
	initgraph(800, 600);                 // ��ͼ�δ��ڳ�ʼ��������Ϊ���ڴ�С 
	setbkcolor(EGERGB(180, 80, 20));      // ���û�������ɫ 
	
	int robot_x, robot_y;
	robot_x = 400;
	robot_y = 500;
	
	setfillcolor(EGERGB(255, 255, 255));          // ���������ɫ 
	fillellipse(robot_x, robot_y, 25, 50);        // ���ƴ�׻��������� 
	fillellipse(robot_x, robot_y-50, 18, 15);     // ���ƴ�׻�����ͷ�� 
	setfillcolor(EGERGB(0, 0, 0));                // ���ƴ�׻������۾� 
	fillellipse(robot_x-8, robot_y-50, 4, 4);
	fillellipse(robot_x+8, robot_y-50, 4, 4);	
	setcolor(EGERGB(0, 0, 0));
	line(robot_x-8, robot_y-50, robot_x+8, robot_y-50);

	getch();                             // ��ͼ�δ��ڲ�������ʧ 
	return 0;
}
