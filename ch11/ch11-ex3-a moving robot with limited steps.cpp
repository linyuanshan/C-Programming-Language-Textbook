#include <stdio.h>
#include <graphics.h>  /* Ϊ��ʹ��EGEͼ�ο⣬��Ҫ������ͷ�ļ� */
int main(){
    initgraph(800, 600);        /* ��ͼ�δ��ڳ�ʼ��������Ϊ���ڴ�С */ 
    setbkcolor(EGERGB(180, 80, 20));     /* ���û�������ɫ */
    int iRobot_x, iRobot_y;     /* �洢�����˵�λ��x��y���� */
    iRobot_x = 400;
    iRobot_y = 100;
    for(int i = 0; i < 100; i++){
        cleardevice();            /* ������� */
        setfillcolor(EGERGB(255, 255, 255));     /* ���������ɫ */
        fillellipse(iRobot_x, iRobot_y, 25, 50);  /* ���ƴ�׻��������� */
        fillellipse(iRobot_x, iRobot_y-50, 18, 15); /* ���ƴ�׻�����ͷ�� */
        setfillcolor(EGERGB(0, 0, 0));           /* ���ƴ�׻������۾� */
        fillellipse(iRobot_x-8, iRobot_y-50, 4, 4);
        fillellipse(iRobot_x+8, iRobot_y-50, 4, 4);	
        setcolor(EGERGB(0, 0, 0));              /* ���ƴ����� */
        line(iRobot_x-8, iRobot_y-50, iRobot_x+8, iRobot_y-50);
        iRobot_y = iRobot_y + 5;      /* ���»�����y����ֵ */
	    delay_fps(30);             /* �û���ÿ���ӻ�30���� */
    }
    getch();   /* ��ֹͼ�δ���������ʧ */
    return 0;
}

