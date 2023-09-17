#include <stdio.h>
#include <graphics.h>// 为了使用EGE图形库，需要包含如下头文件
#include <conio.h>
// 全局常量
const int WINDOW_W = 1000;
const int WINDOW_H = 700;
const int RB_BODY_H = 50;
const int RB_BODY_W = 25;
const int RB_HEAD_H = 15;
// 全局变量：定义变量存储机器人的位置、速度，国旗显示标志和位置
int iRobot_x, iRobot_y, iRobot_vx, iRobot_vy;
int iPlace_flag;
int iFlag_x, iFlag_y;
const int MAP_ROW = 35;
const int MAP_COL = 50;
int iMap[MAP_ROW][MAP_COL] = {0};  // 0表示当前栅格没有障碍, 1表示有障碍

void init() {
	iRobot_x = 500;
	iRobot_y = 500;
	iRobot_vx = 3;
	iRobot_vy = 5;
	iPlace_flag = 0;
	// 初始化地图
	for(int i = 0; i < MAP_ROW; i++)	{
		for(int j = 0; j < MAP_COL; j++){
			if(5 < i && i < 10 && 5 < j && j < 12     // 第一块障碍物
			|| 20 < i && i < 28 && 7 < j && j < 13     // 第二块障碍物
			|| 20 < i && i < 28 && 24 < j && j < 30     // 第三块障碍物
			|| 26 < i && i < 32 && 28 < j && j < 40     // 第四块障碍物
			|| 8 < i && i < 18 && 32 < j && j < 38     // 第五块障碍物
			) {
				iMap[i][j] = 1;
			}			
		}
	} 
} 
// 辅助函数
void print_map(){
	for(int i = 0; i < MAP_ROW; i++)	{
		for(int j = 0; j < MAP_COL; j++)		{
			printf("%d ", iMap[i][j]);			
		}
		printf("\n");
	}
}
void draw_map(color_t color) {
	int cell_w = WINDOW_W / MAP_COL;
	int cell_h = WINDOW_H / MAP_ROW;
	for(int i = 0; i < MAP_ROW; i++)	{
		for(int j = 0; j < MAP_COL; j++){
			if(1 == iMap[i][j]) {
				setfillcolor(color);
				bar(j*cell_w, i*cell_h, (j+1)*cell_w, (i+1)*cell_h);
			}			
		}
	}
}

void draw_robot(int x, int y) {
	setfillcolor(EGERGB(255, 255, 255));          // 设置填充颜色
	fillellipse(x, y, RB_BODY_W, RB_BODY_H);        // 绘制机器人身体
	fillellipse(x, y - RB_BODY_H, 0.7 * RB_BODY_W, 0.3 * RB_BODY_H); 
    // 绘制机器人头部
	setfillcolor(EGERGB(0, 0, 0));                // 绘制机器人眼睛
	fillellipse(x - 0.3 * RB_BODY_W, y - RB_BODY_H, 4, 4);
	fillellipse(x + 0.3 * RB_BODY_W, y - RB_BODY_H, 4, 4);
	setcolor(EGERGB(0, 0, 0));
	line(x - 0.3 * RB_BODY_W, y - RB_BODY_H, x + 0.3 * RB_BODY_W, 
        y - RB_BODY_H);
}
void draw_flag(int x, int y) {
	for (int i = 60 - 1; i >= 0; i--) {
		for (int j = 0; j < 40; j++) {
			if (j == 0)       // 旗杆
				putpixel(x + j, y - 60 + i, WHITE);
			else {
				if (0 <= i && i < 30 && 0 < j && j < 40) {             
               // 国旗旗面
					if (8 < i && i < 13 && 8 < j && j < 13             
              // 红旗上的大星
					        || 2 < i && i < 5 && 16 - 2 < j && j < 19 - 2      
             // 以下为4个小五角星
				|| 2 + 4 < i && i < 5 + 4 && 16 < j && j < 19
			|| 2 + 2 * 4 < i && i < 5 + 2 * 4 && 16 < j && j < 19
|| 2 + 3 * 4 < i && i < 5 + 3 * 4 && 16 - 2 < j && j < 19 - 2 )
						putpixel(x + j, y - 60 + i, YELLOW);
					else
						putpixel(x + j, y - 60 + i, RED);
				}
			}
		}
	}
}
double calculate_avg_temp() {
	printf("请输入一个火星日(24小时37分)12个气温：\n");
	double t, t_avg;
	t_avg = 0.0;
	for (int i = 0; i < 12; i++) {
		scanf("%lf", &t);
		t_avg += t;
	}
	t_avg /= 12.0;
	printf("今天火星上的平均气温为：%.2f\n", t_avg);
	return t_avg;
}
void decode_Mars_codes() {
	// 试试输入Mjqqt1Hmnsf3\jqhtrj%yt%Rfwx&
	printf("请输入待解密的火星文符号(以回车结束)：\n");
	char Mars_code;
	do {
		Mars_code = getchar();
		printf("%c", Mars_code - 5);
	} while (Mars_code != '\n');
}
void process_kb_events() {
	if (kbhit()) {
		char ch = getch();
		switch (ch) {
			case 'w':
			case 'W':
				iRobot_vy = -15;
				// 如果机器人不超出上边界，让其向前运动
				if (iRobot_y + iRobot_vy - RB_BODY_H - RB_HEAD_H > 0) {
					iRobot_y = iRobot_y + iRobot_vy;
				}
				break;
			case 's':
			case 'S':
				iRobot_vy = 15;
				// 如果机器人不超出下边界，让其向后运动
				if (iRobot_y + iRobot_vy + RB_BODY_H < WINDOW_H) {
					iRobot_y = iRobot_y + iRobot_vy;
				}
				break;
			case 'a':
			case 'A':
				iRobot_vx = -15;
				// 如果机器人不超出下边界，让其向后运动
				if (iRobot_x + iRobot_vx - RB_BODY_W > 0) {
					iRobot_x = iRobot_x + iRobot_vx;
				}
				break;
			case 'd':
			case 'D':
				iRobot_vx = 15;
				// 如果机器人不超出下边界，让其向后运动
				if (iRobot_x + iRobot_vx + RB_BODY_W < WINDOW_W) {
					iRobot_x = iRobot_x + iRobot_vx;
				}
				break;
			case 't':
			case 'T':
				calculate_avg_temp();
				break;
			case 'k':
			case 'K':
				decode_Mars_codes();
				break;
			case 'p':
			case 'P':
				iPlace_flag = !iPlace_flag;
				if (iPlace_flag) {
					iFlag_x = iRobot_x + 40;
					iFlag_y = iRobot_y;
				}
				break;
		}
	}
}
int main(){
	initgraph(WINDOW_W, WINDOW_H); //对图形初始化，参数为窗口大小
	// 初始化系统数据
	init();
	print_map();
	while(1){
		cleardevice();            // 清除画面
		setbkcolor(EGERGB(180, 80, 20));
		// 1.绘制场景
		draw_map(EGERGB(128, 128, 128)); 
		draw_robot(iRobot_x, iRobot_y);   // 绘制机器人
		// 2.更新机器人位置
		process_kb_events(); 
		delay_fps(5);             // 让画面每秒钟画5幅画
	}
	getch();                             // 让图形窗口不马上消失
	return 0;
}


