#include <stdio.h>
#include <graphics.h>

int main(){
	initgraph(800, 600);
	
	setbkcolor(EGERGB(50, 50, 50));    /* 设置背景为灰色 */ 
	setfillcolor(EGERGB(255, 0, 0));   /* 设置填充色为红色 */ 
	bar(150, 150, 230, 200);           /* 绘制填充的矩形 */ 
	fillellipse(320, 175, 40, 25);     /* 绘制填充的椭圆 */ 
	setfillcolor(EGERGB(0, 0, 255));   /* 设置填充色为蓝色 */ 
	int points[8] = {400, 200, 480, 200, 460, 150, 420, 150};
	fillpoly(4, points);               /* 绘制填充的多边形 */ 
	pieslice(580, 200, 0, 120, 60);    /* 绘制填充的饼状 */ 
	
	rectangle(150, 350, 230, 400);     /* 绘制矩形 */ 
	ellipse(320, 375, 0, 360, 40, 25); /* 绘制矩形 */ 
	int points1[10] = {400, 400, 480, 400, 460, 350, 420, 350, 400, 400};
	setlinewidth(5);                   /* 设置线的粗细度，在此设为5 */ 
	drawpoly(5, points1);              /* 绘制多边形 */ 
	arc(580, 400, 0, 120, 60);         /* 绘制弧线 */ 
		
	getch();
	closegraph();
	return 0;
}
