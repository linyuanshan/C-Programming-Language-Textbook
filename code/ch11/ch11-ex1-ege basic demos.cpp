#include <stdio.h>
#include <graphics.h>

int main(){
	initgraph(800, 600);
	
	setbkcolor(EGERGB(50, 50, 50));    /* ���ñ���Ϊ��ɫ */ 
	setfillcolor(EGERGB(255, 0, 0));   /* �������ɫΪ��ɫ */ 
	bar(150, 150, 230, 200);           /* �������ľ��� */ 
	fillellipse(320, 175, 40, 25);     /* ����������Բ */ 
	setfillcolor(EGERGB(0, 0, 255));   /* �������ɫΪ��ɫ */ 
	int points[8] = {400, 200, 480, 200, 460, 150, 420, 150};
	fillpoly(4, points);               /* �������Ķ���� */ 
	pieslice(580, 200, 0, 120, 60);    /* �������ı�״ */ 
	
	rectangle(150, 350, 230, 400);     /* ���ƾ��� */ 
	ellipse(320, 375, 0, 360, 40, 25); /* ���ƾ��� */ 
	int points1[10] = {400, 400, 480, 400, 460, 350, 420, 350, 400, 400};
	setlinewidth(5);                   /* �����ߵĴ�ϸ�ȣ��ڴ���Ϊ5 */ 
	drawpoly(5, points1);              /* ���ƶ���� */ 
	arc(580, 400, 0, 120, 60);         /* ���ƻ��� */ 
		
	getch();
	closegraph();
	return 0;
}
