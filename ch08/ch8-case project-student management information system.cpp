#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
struct student
{
	int  num;  //学号 
	char name[10];  //姓名
	char major[10]; // 专业 
	char course[10]; // 课程名
	int score; //成绩 
	struct student *next;
};
int n=0; //链表结点数 
struct student *input(){
	struct student *p;
	char ch;
	p=(struct student*)malloc(sizeof(struct student));
	printf("\n\n  请输入学生信息(输入学号0退出)\t\t当前学生总数：%d\n",n); 
	printf("------------------------------------------------------------\n");
	printf("%6s:","学号");
	scanf("%d",&p->num);
	if(p->num==0){
		printf("退出？(Y|N)\n");
		ch=getch();
		if(ch=='y'||ch=='Y')
			return 0;
		else {
			printf("\n%6s:","学号");
			scanf("%d",&p->num);
		}	   
	}
	printf("%6s:","姓名");
	scanf("%s",&p->name);
	printf("%6s:","专业");
	scanf("%s",&p->major);
	printf("%6s:","课程名");
	scanf("%s",&p->course);
	printf("%6s:","成绩");
	scanf("%d",&p->score);
	return p;
	
}
struct student *createLL()
{
	struct student *p1=NULL,*p2=NULL,*head=NULL; 
	p2=p1=input();
	while(p1)
	{
		n++;
		if(n==1) head=p1;
		else
			p2->next =p1;	
		p2=p1;	
		
		p1=input();
	}
	p2->next =NULL;
	return head;
}
void display(struct student *head)
{
	struct student *p1,*p2;
	p1=p2=head;
	printf("------------------------------------------------------------\n");
	printf("%5s%10s%10s%10s%10s\n","学号","姓名","专业","课程名","成绩");
	printf("------------------------------------------------------------\n");
	while(p1)
	{
		printf("%5d%10s%10s%10s%10d\n",p1->num,
			p1->name,p1->major,p1->course,p1->score);
		p1=p2->next;
		p2=p1;
	}
	printf("------------------------------------------------------------\n");
	printf("  \t\t\t\t\t\t当前学生总数：%d\n",n);    
}
void delAll(struct student *head)
{
	struct student *p1,*p2;
	p1=p2=head;
	while(p1)
	{
		p1=p2->next;
		free(p2);
		p2=p1;
	}
	n=0;
	head=NULL;
}
struct student* searchNum(struct student * head,int Num)
{
	struct student *p1;
	p1=head;
	if(p1!=NULL)
	{  while(p1->num !=Num)
	{
		p1=p1->next;
		if(p1==NULL)
			return NULL;       //查找失败返回NULL
	}
	return p1;       //查找成功返回所在地址
	}
	else
		return NULL;  //空链表返回NULL
}
void insertNod(struct student **head)
{
	struct student *p1,*p2,*p0;
	p0=(struct student*)malloc(sizeof(struct student));
	printf("插入新学生信息：\n");
	printf("学号：");
	scanf("%d",&p0->num);
	if(searchNum(*head,p0->num))
	{
		printf("该学号已经存在，插入失败！");
		free(p0);
		system("pause");
	}
	else
	{	
		printf("%6s:","姓名");
		scanf("%s",&p0->name);
		printf("%6s:","专业");
		scanf("%s",&p0->major);
		printf("%6s:","课程名");
		scanf("%s",&p0->course);
		printf("%6s:","成绩");
		scanf("%d",&p0->score);
		p2=p1=*head;
		while(p1->next!=NULL){
			p2=p1;
			p1=p2->next;
		}
		p1->next=p0;
		p0->next =NULL;
		n++;
	}
}
void modifyNod( struct student *head,int Num)
{
	struct student *p;
	if(p=searchNum(head,Num)) //查找待修改学号地址
	{
		printf("%6s:","姓名");
		scanf("%s",&p->name);
		printf("%6s:","专业");
		scanf("%s",&p->major);
		printf("%6s:","课程名");
		scanf("%s",&p->course);
		printf("%6s:","成绩");
		scanf("%d",&p->score);
		printf("修改成功！");	
	}
	else
		printf("学号:%d 输入错误！数据修改失败\n",Num);
}
void delNod( struct student **head,int Num)
{
	struct student *p1,*p2;
	p1=*head;
	if(p1)
	{
		if(Num ==p1->num){ //删除位置在链表头
			*head=p1->next;
			free(p1);
			n--;
		}
		else{
			while(Num !=p1->num&&p1->next!=NULL)
			{
				p2=p1;
				p1=p2->next;		
			}
			if(Num ==p1->num) {  
				if(p1->next!=NULL){
					//删除位置链表中 
					p2->next=p1->next;
					free(p1);
					n--;
				}
				else{	 //删除位置链表尾
					free(p1);
					p2->next=NULL;
					n--;
				}			
			}
			else{       
				printf("待删除的学号不存在！\n");
			}
		}
	}
}
//=============链表冒泡排序====================*/
void sort(struct student **head)
{
	int i,j;
	struct student* phead,*ph1,*ph2,*temp,*p;
	//动态分配头结点 
	p=(struct student*)malloc(sizeof(struct student)); 
	for (i=0;i<n-1; i++)
	{
		phead=p;
		//phead指向头结点
		phead->next = (*head);
		//ph1指向首元结点
		ph1 = phead->next;
		//ph2指向首元结点的后继
		ph2 = ph1->next;
		for (j = 0; j < n - 1 - i; j++)
		{
			//如果前面的值大于后面的值则交换
			if (ph1->score> ph2->score)
			{
				phead->next = ph2;
				ph1->next = ph2->next;
				ph2->next = ph1;
				//结点交换后，ph1与ph2位置颠倒回来
				temp = ph1;
				ph1 = ph2;
				ph2 = temp; 
			}
			if(j==0)(*head)=phead->next;
			//如果不需要交换,三指针移动
			phead = phead->next;
			ph1 = ph1->next;
			ph2 = ph2->next;			
		}       
	}
	free(p);   
}
void menu(){
	system("color 0A");   //文字颜色  
	printf("欢迎使用学生成绩管理系统\n");
	printf("----------------------------\n");
	printf("1. 创建数据表\n");
	printf("2. 数据表输出\n");
	printf("3. 插入学生信息\n");
	printf("4. 删除学生信息\n");
	printf("5. 查询课程成绩\n");
	printf("6. 修改学生信息\n");
	printf("7. 成绩排序\n");
	printf("8. 退出\n");
	printf("----------------------------\n");
}
int main(int argc, char* argv[])
{
	struct student *head=NULL,*p;int num;
	char  ch;	
	while(1)
	{
		system("cls");        //清屏 
		menu(); // 显示菜单 
		ch=getch();
		if(!(ch=='1'||ch=='2'||ch=='8')){
			if(!head){
				printf("\n表数据为空，请先创建数据表！\n");break;
			}
		}
		system("cls");
		switch(ch){
			case '1': 	if(head){
				printf("\n数据表已经存在，本操作将清除全部数据，是否继续(Y|N)?\n");
					ch=getch();
					if(ch=='Y'||ch=='y')
						delAll(head);
					else
						break;	
			}
			head=createLL();break;
			case '2': 	display(head);break;
			case '3': 	insertNod(&head);break;
			case '4': 	printf("请输入待删除的学号\n");
			scanf("%d",&num);
			delNod(&head,num);break;
			case '5':	printf("请输入查询的学号\n");
			scanf("%d",&num);
			if(p=searchNum(head,num)){
				printf("%5s%10s%10s%10s%10s\n","学号","姓名","专业","课程名","成绩");
				printf("------------------------------------------------------------\n");
				printf("%5d%10s%10s%10s%10d\n",p->num,p->name,p->major,p->course,p->score);
			}
			else
				printf("\n查找失败该学号学生不存在\n");
			break;
			case '6': 	printf("请输入待修改学号\n");
			scanf("%d",&num);
			modifyNod(head,num); break;					         
			case '7': 	sort(&head);
			display(head);
			break;
			case '8': exit(0);         					         
		}		
		printf("\n按任意键继返回菜单,按Q退出.....\n");
		ch=getch();
		if(ch=='q'||ch=='Q')break; 
	}
	delAll(head);
	return 0;
}

