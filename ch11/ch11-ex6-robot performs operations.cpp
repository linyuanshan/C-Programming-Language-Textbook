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
  int iPlace_flag = 0;
  int iFlag_x, iFlag_y;
	
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
        
    // ���ƹ���
	if(iPlace_flag){
		for(int i = 60-1; i >= 0; i--){
			for(int j = 0; j < 40; j++)	{
				if(j == 0)        // ���
					putpixel(iFlag_x + j, iFlag_y-60 + i, WHITE);
				else{					
					if(0 <= i && i < 30 && 0 < j && j < 40){	// ��������
						if(8 < i && i < 13 && 8 < j && j < 13  // �����ϵĴ���
				|| 2 < i && i < 5 && 16-2 < j && j < 19-2 // 4��С�����
						|| 2+4 < i && i < 5+4 && 16 < j && j < 19
						|| 2+2*4 < i && i < 5+2*4 && 16 < j && j < 19
						|| 2+3*4 < i && i < 5+3*4 && 16-2 < j && j < 19-2
						) 
							putpixel(iFlag_x + j, iFlag_y-60 + i, YELLOW);
						else
							putpixel(iFlag_x + j, iFlag_y-60 + i, RED);
					}
				}
			}
		}
	}

    /* ���»�����λ�� */
	if(kbhit()){        /* ����һ��C���Կ⣬�����Ǽ���Ƿ��а��� */
		char ch = getch();    /* ��ȡ��������Ӧ���ַ� */
		switch(ch) { 
			case 'w':
				iRobot_vy = -10;
				/* ��������˲������ϱ߽磬������ǰ�˶� */
				if(iRobot_y+iRobot_vy-RB_BODY_H-RB_HEAD_H > 0)
					iRobot_y = iRobot_y + iRobot_vy; 
				break;
			case 's':
				iRobot_vy = 10;
				/* ��������˲������±߽磬��������˶� */
				if(iRobot_y+iRobot_vy+RB_BODY_H < WINDOW_H)
					iRobot_y = iRobot_y + iRobot_vy; 
				break;
			case 'a':
				iRobot_vx = -10;
				/* ��������˲������±߽磬��������˶� */
				if(iRobot_x+iRobot_vx-RB_BODY_W > 0)
					iRobot_x = iRobot_x + iRobot_vx; 
				break;
			case 'd':
				iRobot_vx = 10;
				/* ��������˲������±߽磬��������˶� */
				if(iRobot_x+iRobot_vx+RB_BODY_W < WINDOW_W)
					iRobot_x = iRobot_x + iRobot_vx; 
				break;
			case 't':                                               
			case 'T':                                               
				printf("������һ��������(24Сʱ37��)12�����£�\n"); 
				double dTemp, dTemp_avg;                            
				dTemp_avg = 0.0;                                    
				for(int i = 0; i < 12; i++){                                                   
					scanf("%lf", &dTemp);                           
					dTemp_avg += dTemp;                             
				}                                                   
				dTemp_avg /= 12.0;                                  
				printf("��������ϵ�ƽ������Ϊ��%.2f\n", dTemp_avg);
				break;
			case 'k':
			case 'K':
				// ��������Mjqqt1Hmnsf3\jqhtrj%yt%Rfwx&
				printf("����������ܵĻ����ķ���(�Իس�����)��\n");
				char Mars_code;
				do{
					Mars_code = getchar();           
					printf("%c", Mars_code-5);   
				}while(Mars_code != '\n');
				break;
			case 'p':
			case 'P':
				iPlace_flag = !iPlace_flag;
				if(iPlace_flag)
				{
					iFlag_x = iRobot_x + 40;
					iFlag_y = iRobot_y; 
				}
				break;
		}
	}

    delay_fps(5);             /* �û���ÿ���ӻ�5����  */
  }
  getch();         /* ��ֹ��ͼ�δ���������ʧ  */
  return 0;
}

