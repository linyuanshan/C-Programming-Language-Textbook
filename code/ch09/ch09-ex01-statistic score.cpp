#include <stdio.h>
#include <string.h>
#define M 10
struct StuScore{
	int id;
	char name[20];
	char flag;       /*�ɼ����'m'Ϊ�ٷ��ƣ�'g'Ϊ�弶�� */
	union {
		int mark;
		char grade[12];
	}score;
};
/*���ɼ�����sָ����ڴ浥Ԫ*/
int ReadStuScore(struct StuScore *s);
/*��ʾ�ṹ�����s����*/
void DisplayStuScore(struct StuScore s);
int main(int argc, char *argv[]) {
	struct StuScore ss[M];
	int n,i,r;
	printf("������ѧ������:");
	scanf("%d",&n);
	printf("������ѧ��������ѧ�š��ɼ����m�ٷ��ƣ�g�弶�ƣ�:\n");
	for(i=0;i<n;i++){
		printf("�������%d��ѧ����Ϣ��\n",i+1);
		/*���ݶ��뵽�ṹ������Ԫ��ss[i]��*/
		r=ReadStuScore(&ss[i]);
		/*����0ֵ��ʾ�����������󣬲���¼*/
		if(r==0)
			i--;
	}
	printf("**********************\n��ʾѧ���ɼ���Ϣ:\n");
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
			printf("������ٷ��Ƴɼ���");
			scanf("%d",&s->score.mark);
			return 1;
		case 'g':
		case 'G':
			printf("��ѡ������Ƴɼ���A.���㣻B.���ã�C.�еȣ�D.����E.������");
			/*while��佫���뻺����������գ���֤������ȷ�����ַ�*/
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
        printf("����ɼ����������������������ݣ�\n");
	return flagInputError;
}
void DisplayStuScore(struct StuScore s){
	printf("%s\t%d\t",s.name,s.id);
	if(s.flag=='m'||s.flag=='M')
		printf("%d\n",s.score.mark);
	else if(s.flag=='g'||s.flag=='G')
		printf("%s\n",s.score.grade);
}


