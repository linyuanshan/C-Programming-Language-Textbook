#include <stdio.h>
#include <graphics.h>// Ϊ��ʹ��EGEͼ�ο⣬��Ҫ��������ͷ�ļ�
#include <conio.h>
#include <time.h>         // ����������õ�ϵͳʱ�䣬��Ҫ������ͷ�ļ�
#include <math.h>         // ������ѧ���㺯����

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

const int TREASURE_NUM = 4;
void print_treasure(int trea_type[], int trea_x[], int trea_y[], int n);
int treasure_type[TREASURE_NUM] = {0};    // 0��ʾ�գ�1��ʾ������������2��ʾ����ԭʯ��3��ʾ�Ѿ��򿪹�
int treasure_x[TREASURE_NUM];
int treasure_y[TREASURE_NUM]; 
char str_info[200] = "";    // �����ڳ�������ʾ��Ϣ
int info_x, info_y;     // ������ʾ��Ϣ
int show_info; 


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
	show_info = 0;
    // ��ʼ��������Ϣ
	int cell_idx_x, cell_idx_y;
	srand((unsigned)time(NULL));
	int cell_w = WINDOW_W / MAP_COL;
	int cell_h = WINDOW_H / MAP_ROW;
	for(int i = 0; i < TREASURE_NUM; i++){
	treasure_type[i] = rand() % 3;   // ������ɱ�������
	// ������ɱ���λ������
	while(1) {
		cell_idx_x = rand() % MAP_COL;
		cell_idx_y = rand() % MAP_ROW;
		if(0 == iMap[cell_idx_y][cell_idx_x]) {
			treasure_x[i] = cell_idx_x*cell_w + cell_w/2;
			treasure_y[i] = cell_idx_y*cell_h + cell_h/2;
			break;
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

void draw_treasure(int trea_type[], int trea_x[], int trea_y[], int n) {
	char str_num[10];
	for(int i = 0; i < TREASURE_NUM; i++){
		sprintf(str_num, "%d", i);
		setfillcolor(YELLOW);
		fillellipse(trea_x[i], trea_y[i], 23, 18);
		setbkmode(TRANSPARENT);
		outtextxy(trea_x[i]-10, trea_y[i]-8, str_num);
		if(3 == trea_type[i]) {    // �Ѵ򿪣�����С�����
			setfillcolor(RED);
			fillellipse(trea_x[i] + 10, trea_y[i], 6, 6);
		}
	}
}
int open_treasure(){
	int which_one = 0;
	double dx, dy, d, min_d = 99999999999;
	for(int i = 0; i < TREASURE_NUM; i++){
		dx = iRobot_x - treasure_x[i];
		dy = iRobot_y - treasure_y[i];
		d = sqrt(dx*dx + dy*dy);
		if( d < min_d)	{
			min_d = d;
			which_one = i;
		}
	}
	if(min_d < 80) {   // ���ؾ��ڻ������Ա�
		switch(treasure_type[which_one])	{
			case 0:
				sprintf(str_info, "���أ�ʲôҲû�У���");
				break; 
			case 1:
				sprintf(str_info, "Ŷ������һ�Ż�����ֽ����");
				break; 
			case 2:
				sprintf(str_info, "�������õ�һ������ԭʯ����");
				break; 
		} 
		info_x = treasure_x[which_one];
		info_y = treasure_y[which_one] - 30;
					
		printf("��%d�ű��ر��򿪣����� = %d, λ�� = (%d, %d)\n", 
		which_one, treasure_type[which_one], treasure_x[which_one], 
treasure_y[which_one]);
		treasure_type[which_one] = 3;    // �ѱ��ر��Ϊ�Ѵ�
		return which_one;
	}
	return -1;
}
void print_treasure(int trea_type[], int trea_x[], int trea_y[], int n){
	for(int i = 0; i < n; i++){
		printf("i = %d, (%d, %d)\n", trea_type[i], trea_x[i], trea_y[i]);
	}
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
			case 'o':
			case 'O':
				int which = open_treasure();
				if(which != -1)	{
					show_info = 1;
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
		draw_treasure(treasure_type, treasure_x, treasure_y, TREASURE_NUM); 
		if(show_info){
			setbkmode(TRANSPARENT);
			outtextxy(info_x, info_y, str_info);
		}

		// 2.���»�����λ��
		process_kb_events(); 
		delay_fps(5);             // �û���ÿ���ӻ�5����
	}
	getch();                             // ��ͼ�δ��ڲ�������ʧ
	return 0;
}


