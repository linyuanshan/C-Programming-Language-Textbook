#include <stdio.h>
#include <graphics.h>  /* Ϊ��ʹ��EGEͼ�ο⣬��Ҫ������ͷ�ļ� */
int main()
{
    initgraph(800, 600);        /* ��ͼ�δ��ڳ�ʼ��������Ϊ���ڴ�С */ 
    setbkcolor(EGERGB(180, 80, 20));     /* ���û�������ɫ */
    setfillcolor(EGERGB(255, 255, 255));  /* ���������ɫ */
    fillellipse(400, 500, 25, 50);          /* ���ƴ�׻��������� */
    getch();   /* ��ֹͼ�δ���������ʧ */
    return 0;
}

