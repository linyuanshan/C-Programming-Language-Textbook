#include <stdio.h>
#include <graphics.h>      /* 为了使用EGE图形库，需要包含此头文件 */
/* 定义以下一些描述机器人尺寸的常量 */
const int RB_BODY_H = 50;   /* 等价于#define RB_BODY_H  50 */
const int RB_BODY_W = 25;   /* 等价于#define RB_BODY_W  25 */
const int RB_HEAD_H = 15;   /* 等价于#define RB_HEAD_H  15 */
const int WINDOW_W = 1000;  /* 窗口的宽 */
const int WINDOW_H = 700;   /* 窗口的高 */
int main(){
  initgraph(1000, 700);    /* 对图形窗口初始化，参数为窗口大小*/   
  setbkcolor(EGERGB(180, 80, 20));     /* 设置画布背景色 */
  /* 定义变量表示机器人状态：位置和速度 */
  int iRobot_x, iRobot_y, iRobot_vx, iRobot_vy;    
  iRobot_x = 500;
  iRobot_y = 50;
  iRobot_vx = 3;
  iRobot_vy = 2;
  int iPlace_flag = 0;
  int iFlag_x, iFlag_y;
	
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
        
    // 绘制国旗
	if(iPlace_flag){
		for(int i = 60-1; i >= 0; i--){
			for(int j = 0; j < 40; j++)	{
				if(j == 0)        // 旗杆
					putpixel(iFlag_x + j, iFlag_y-60 + i, WHITE);
				else{					
					if(0 <= i && i < 30 && 0 < j && j < 40){	// 国旗旗面
						if(8 < i && i < 13 && 8 < j && j < 13  // 红旗上的大星
				|| 2 < i && i < 5 && 16-2 < j && j < 19-2 // 4个小五角星
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

    /* 更新机器人位置 */
	if(kbhit()){        /* 这是一个C语言库，功能是检测是否有按键 */
		char ch = getch();    /* 获取到按键对应的字符 */
		switch(ch) { 
			case 'w':
				iRobot_vy = -10;
				/* 如果机器人不超出上边界，让其向前运动 */
				if(iRobot_y+iRobot_vy-RB_BODY_H-RB_HEAD_H > 0)
					iRobot_y = iRobot_y + iRobot_vy; 
				break;
			case 's':
				iRobot_vy = 10;
				/* 如果机器人不超出下边界，让其向后运动 */
				if(iRobot_y+iRobot_vy+RB_BODY_H < WINDOW_H)
					iRobot_y = iRobot_y + iRobot_vy; 
				break;
			case 'a':
				iRobot_vx = -10;
				/* 如果机器人不超出下边界，让其向后运动 */
				if(iRobot_x+iRobot_vx-RB_BODY_W > 0)
					iRobot_x = iRobot_x + iRobot_vx; 
				break;
			case 'd':
				iRobot_vx = 10;
				/* 如果机器人不超出下边界，让其向后运动 */
				if(iRobot_x+iRobot_vx+RB_BODY_W < WINDOW_W)
					iRobot_x = iRobot_x + iRobot_vx; 
				break;
			case 't':                                               
			case 'T':                                               
				printf("请输入一个火星日(24小时37分)12个气温：\n"); 
				double dTemp, dTemp_avg;                            
				dTemp_avg = 0.0;                                    
				for(int i = 0; i < 12; i++){                                                   
					scanf("%lf", &dTemp);                           
					dTemp_avg += dTemp;                             
				}                                                   
				dTemp_avg /= 12.0;                                  
				printf("今天火星上的平均气温为：%.2f\n", dTemp_avg);
				break;
			case 'k':
			case 'K':
				// 试试输入Mjqqt1Hmnsf3\jqhtrj%yt%Rfwx&
				printf("请输入待解密的火星文符号(以回车结束)：\n");
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

    delay_fps(5);             /* 让画面每秒钟画5幅画  */
  }
  getch();         /* 防止让图形窗口马上消失  */
  return 0;
}

