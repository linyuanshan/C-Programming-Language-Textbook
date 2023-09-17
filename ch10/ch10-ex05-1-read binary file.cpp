#include <stdio.h>
int main(){  
	int iNo; 
	char strName[32] = {0};  
	int iScores[3] = {0};
	FILE* pfIn = NULL;
	int i = 1;
	int iTotalScore = 0;    
	/* 1.打开文件 */ 
	pfIn = fopen("I:\\devc_projs\\teaching\\stu_scores.dat", "rb");
	if(!pfIn){
		printf("打开文件出错！\n");
		return -1;
	}
	/* 打印表头 */
	printf(" 学号姓名高数英语 C语言总分\n"); 
	while(!feof(pfIn)){
		/* 2.从文件中读取学生成绩信息，并存储到变量中 */ 
		fread(&iNo, sizeof(iNo), 1, pfIn);
		fread(strName, sizeof(strName), 1, pfIn);
		fread(&iScores[0], sizeof(iScores[0]), 1, pfIn);
		fread(&iScores[1], sizeof(iScores[1]), 1, pfIn);
		fread(&iScores[2], sizeof(iScores[2]), 1, pfIn);    	
		/* 对成绩信息进行加工，并把加工后的信息显示到屏幕上 */
		iTotalScore = iScores[0] + iScores[1] + iScores[2];
		printf("%d, %s, %d,  %d,  %d,  %d\n", iNo, strName, iScores[0], 
			iScores[1], iScores[2], iTotalScore);
	}	
	/* 3.文件读写操作完毕，关闭文件 */
	fclose(pfIn); 
	return 0;  
}


