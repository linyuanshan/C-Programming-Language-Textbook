#include <stdio.h>  
 
int main(){  
    int iNo; 
    char strName[32] = {0};  
    int iScores[3] = {0};
    FILE* pfOut = NULL;
    int i = 1;
    
    /* 1.打开文件 */ 
    pfOut = fopen("I:\\devc_projs\\teaching\\stu_scores.txt", "w");
    if(!pfOut){
    	printf("打开文件出错！\n");
    	return -1;
	}

    while(1){
    	printf("请输入第%d位学生的信息(学号、姓名、高数、英语、C语言)：\n", i++);
    	scanf("%d%s%d%d%d", &iNo, strName, &iScores[0], &iScores[1], &iScores[2]);
    	
    	if(iNo == -1)   /* 输入-1表示结束录入信息 */ 
    		break;
    	
    	/* 2.将信息转换为字符串并写到文件中 */ 
    	fprintf(pfOut, "%d, %s, %d, %d, %d\n", iNo, strName, iScores[0], iScores[1], iScores[2]);
	}
	
	/* 3.文件读写操作完毕，关闭文件 */
	fclose(pfOut); 

    return 0;  
}  

