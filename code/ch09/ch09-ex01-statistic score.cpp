#include <stdio.h>
#include <string.h>
#define M 10
struct StuScore{
	int id;
	char name[20];
	char flag;       /*成绩标记'm'为百分制，'g'为五级制 */
	union {
		int mark;
		char grade[12];
	}score;
};
/*将成绩读入s指向的内存单元*/
int ReadStuScore(struct StuScore *s);
/*显示结构体变量s内容*/
void DisplayStuScore(struct StuScore s);
int main(int argc, char *argv[]) {
	struct StuScore ss[M];
	int n,i,r;
	printf("请输入学生人数:");
	scanf("%d",&n);
	printf("请输入学生姓名、学号、成绩类别（m百分制，g五级制）:\n");
	for(i=0;i<n;i++){
		printf("请输入第%d条学生信息：\n",i+1);
		/*数据读入到结构体数组元素ss[i]中*/
		r=ReadStuScore(&ss[i]);
		/*返回0值表示读入数据有误，不记录*/
		if(r==0)
			i--;
	}
	printf("**********************\n显示学生成绩信息:\n");
	for(i=0;i<n;i++)
		DisplayStuScore(ss[i]);
	return 0;
}
int ReadStuScore(struct StuScore *s){
	int flagInputError=1;
	char c;
	scanf("%s %d %c",s->name,&s->id,&s->flag);
	switch(s->flag)	{
		case 'm':
		case 'M':
			printf("请输入百分制成绩：");
			scanf("%d",&s->score.mark);
			return 1;
		case 'g':
		case 'G':
			printf("请选择五分制成绩：A.优秀；B.良好；C.中等；D.及格；E.不及格：");
			/*while语句将输入缓冲区数据清空，保证后续正确读入字符*/
			while((c = getchar()) != '\n' && c != EOF);
			scanf("%c",&c);
			switch(c)	{
			case 'A':case 'a':strcpy(s->score.grade,"Distinction");break;
			case 'B':case 'b':strcpy(s->score.grade,"Merit");break;
			case 'C':case 'c':strcpy(s->score.grade,"Medium");break;
			case 'D':case 'd':strcpy(s->score.grade,"Passed");break;
			case 'E':case 'e':strcpy(s->score.grade,"Failed");break;
			default:flagInputError=0;break;
			}
			break;
		default:flagInputError=0;break;
	}
	if(flagInputError==0)
        printf("输入成绩有误，请重新输入这条数据！\n");
	return flagInputError;
}
void DisplayStuScore(struct StuScore s){
	printf("%s\t%d\t",s.name,s.id);
	if(s.flag=='m'||s.flag=='M')
		printf("%d\n",s.score.mark);
	else if(s.flag=='g'||s.flag=='G')
		printf("%s\n",s.score.grade);
}


