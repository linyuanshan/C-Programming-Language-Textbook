#include <stdio.h>
#include <graphics.h>      /* Ϊ��ʹ��EGEͼ�ο⣬��Ҫ������ͷ�ļ� */
/* ��������һЩ���������˳ߴ�ĳ��� */
const int RB_BODY_H = 50;   /* �ȼ���#define RB_BODY_H  50 */
const int RB_BODY_W = 25;   /* �ȼ���#define RB_BODY_W  25 */
const int RB_HEAD_H = 15;   /* �ȼ���#define RB_HEAD_H  15 */
const int WINDOW_W = 1000;  /* ���ڵĿ� */
const int WINDOW_H = 700;   /* ���ڵĸ� */
int main(){
  initgraph(1000, 700);    /* ��ͼ�δ��ڳ�ʼ��������Ϊ���ڴ�С*/   
  setbkcolor(EGERGB(180, 80, 20));     /* ���û�������ɫ */
  /* ���������ʾ������״̬��λ�ú��ٶ� */
  int iRobot_x, iRobot_y, iRobot_vx, iRobot_vy;    
  iRobot_x = 500;
  iRobot_y = 50;
  iRobot_vx = 3;
  iRobot_vy = 2;
  while(1) {	
    cleardevice();            /* ������� */
    // 1.���ƻ�����
    setfillcolor(EGERGB(255, 255, 255));          /* ���������ɫ  */
    fillellipse(iRobot_x, iRobot_y, RB_BODY_W, RB_BODY_H);/*��������*/
    fillellipse(iRobot_x, iRobot_y-RB_BODY_H, 0.7*RB_BODY_W, 
             0.3*RB_BODY_H);
    /* ����ͷ��  */
    setfillcolor(EGERGB(0, 0, 0));    /* ���ƻ������۾�  */
    fillellipse(iRobot_x-0.3*RB_BODY_W, iRobot_y-RB_BODY_H, 4, 4);
    fillellipse(iRobot_x+0.3*RB_BODY_W, iRobot_y-RB_BODY_H, 4, 4);	
    setcolor(EGERGB(0, 0, 0));
    line(iRobot_x-0.3*RB_BODY_W, iRobot_y-RB_BODY_H, 
        iRobot_x+0.3*RB_BODY_W, iRobot_y-RB_BODY_H);
    /* 2.���»�����λ�� */
    if(iRobot_x+ iRobot_vx < 0)
      iRobot_vx = -iRobot_vx;
    if(iRobot_x+ iRobot_vx > WINDOW_W)
      iRobot_vx = -iRobot_vx;
    if(iRobot_y+ iRobot_vy < 0)
      iRobot_vy = -iRobot_vy;
    if(iRobot_y+ iRobot_vy > WINDOW_H)
      iRobot_vy = -iRobot_vy;
    iRobot_x = iRobot_x + iRobot_vx;
    iRobot_y = iRobot_y + iRobot_vy;    
    delay_fps(5);             /* �û���ÿ���ӻ�5����  */
  }
  getch();         /* ��ֹ��ͼ�δ���������ʧ  */
  return 0;
}

