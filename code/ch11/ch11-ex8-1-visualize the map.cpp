#include <stdio.h>
#include <graphics.h>// Ϊ��ʹ��EGEͼ�ο⣬��Ҫ��������ͷ�ļ�
#include <conio.h>
// ȫ�ֳ���
const int WINDOW_W = 1000;
const int WINDOW_H = 700;
const int RB_BODY_H = 50;
const int RB_BODY_W = 25;
const int RB_HEAD_H = 15;
// ȫ�ֱ�������������洢�����˵�λ�á��ٶȣ�������ʾ��־��λ��
int iRobot_x, iRobot_y, iRobot_vx, iRobot_vy;
int iPlace_flag;
int iFlag_x, iFlag_y;
const int MAP_ROW = 35;
const int MAP_COL = 50;
int iMap[MAP_ROW][MAP_COL] = {0};  // 0��ʾ��ǰդ��û���ϰ�, 1��ʾ���ϰ�

void init() {
	iRobot_x = 500;
	iRobot_y = 500;
	iRobot_vx = 3;
	iRobot_vy = 5;
	iPlace_flag = 0;
	// ��ʼ����ͼ
	for(int i = 0; i < MAP_ROW; i++)	{
		for(int j = 0; j < MAP_COL; j++){
			if(5 < i && i < 10 && 5 < j && j < 12     // ��һ���ϰ���
			|| 20 < i && i < 28 && 7 < j && j < 13     // �ڶ����ϰ���
			|| 20 < i && i < 28 && 24 < j && j < 30     // �������ϰ���
			|| 26 < i && i < 32 && 28 < j && j < 40     // ���Ŀ��ϰ���
			|| 8 < i && i < 18 && 32 < j && j < 38     // ������ϰ���
			) {
				iMap[i][j] = 1;
			}			
		}
	} 
} 
// ��������
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
	setfillcolor(EGERGB(255, 255, 255));          // ���������ɫ
	fillellipse(x, y, RB_BODY_W, RB_BODY_H);        // ���ƻ���������
	fillellipse(x, y - RB_BODY_H, 0.7 * RB_BODY_W, 0.3 * RB_BODY_H); 
    // ���ƻ�����ͷ��
	setfillcolor(EGERGB(0, 0, 0));                // ���ƻ������۾�
	fillellipse(x - 0.3 * RB_BODY_W, y - RB_BODY_H, 4, 4);
	fillellipse(x + 0.3 * RB_BODY_W, y - RB_BODY_H, 4, 4);
	setcolor(EGERGB(0, 0, 0));
	line(x - 0.3 * RB_BODY_W, y - RB_BODY_H, x + 0.3 * RB_BODY_W, 
        y - RB_BODY_H);
}
void draw_flag(int x, int y) {
	for (int i = 60 - 1; i >= 0; i--) {
		for (int j = 0; j < 40; j++) {
			if (j == 0)       // ���
				putpixel(x + j, y - 60 + i, WHITE);
			else {
				if (0 <= i && i < 30 && 0 < j && j < 40) {             
               // ��������
					if (8 < i && i < 13 && 8 < j && j < 13             
              // �����ϵĴ���
					        || 2 < i && i < 5 && 16 - 2 < j && j < 19 - 2      
             // ����Ϊ4��С�����
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
	printf("������һ��������(24Сʱ37��)12�����£�\n");
	double t, t_avg;
	t_avg = 0.0;
	for (int i = 0; i < 12; i++) {
		scanf("%lf", &t);
		t_avg += t;
	}
	t_avg /= 12.0;
	printf("��������ϵ�ƽ������Ϊ��%.2f\n", t_avg);
	return t_avg;
}
void decode_Mars_codes() {
	// ��������Mjqqt1Hmnsf3\jqhtrj%yt%Rfwx&
	printf("����������ܵĻ����ķ���(�Իس�����)��\n");
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
				// ��������˲������ϱ߽磬������ǰ�˶�
				if (iRobot_y + iRobot_vy - RB_BODY_H - RB_HEAD_H > 0) {
					iRobot_y = iRobot_y + iRobot_vy;
				}
				break;
			case 's':
			case 'S':
				iRobot_vy = 15;
				// ��������˲������±߽磬��������˶�
				if (iRobot_y + iRobot_vy + RB_BODY_H < WINDOW_H) {
					iRobot_y = iRobot_y + iRobot_vy;
				}
				break;
			case 'a':
			case 'A':
				iRobot_vx = -15;
				// ��������˲������±߽磬��������˶�
				if (iRobot_x + iRobot_vx - RB_BODY_W > 0) {
					iRobot_x = iRobot_x + iRobot_vx;
				}
				break;
			case 'd':
			case 'D':
				iRobot_vx = 15;
				// ��������˲������±߽磬��������˶�
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
	initgraph(WINDOW_W, WINDOW_H); //��ͼ�γ�ʼ��������Ϊ���ڴ�С
	// ��ʼ��ϵͳ����
	init();
	print_map();
	while(1){
		cleardevice();            // �������
		setbkcolor(EGERGB(180, 80, 20));
		// 1.���Ƴ���
		draw_map(EGERGB(128, 128, 128)); 
		draw_robot(iRobot_x, iRobot_y);   // ���ƻ�����
		// 2.���»�����λ��
		process_kb_events(); 
		delay_fps(5);             // �û���ÿ���ӻ�5����
	}
	getch();                             // ��ͼ�δ��ڲ�������ʧ
	return 0;
}


