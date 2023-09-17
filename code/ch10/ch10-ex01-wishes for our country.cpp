#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
void  Input(){
	FILE *fpOut;                    /*定义文件指针 */
	char strLine[200];          /* 定义字符数组 */
	/* 1.打开文件 */  
	fpOut = fopen("wishes.txt", "w");   
	if(fpOut == NULL) {     
		printf("无法创建文件！\n");  
		exit(0);  
	}  
	/* 2.写文件 */ 
	while(true) { 
		printf("请输入您的名字和祝福语：\n");
		scanf("%s", strLine);  /*从键盘获取一行文字，并存储到strLine数组中 */
		if(!strcmp(strLine, "完毕"))
			break;
		fputs(strLine, fpOut);   /* 向文件fpOut中写入该祝福语 */   
		fputc('\n', fpOut);      /* 向文件fpOut中写入回车符 */   
		memset(strLine, 0, sizeof(strLine));  /* 清空strLine数组 */   
	}  
	/* 3.关闭文件 */
	fclose(fpOut);      
}
int main(){                        
	printf("同学们的祝福语开始录入\n");
	Input();    /* 调用祝福语录入功能 */
	return 0;  
}  


