#include <stdio.h>
#include <string.h>
typedef struct MarsProbe{
  char CName[20];    /*������*/
  char FName[20];    /*Ӣ����*/
  char Country[20];   /*����*/
  int  LaunchTime;   /*����ʱ��*/
  float Weight;       /*����*/
  char Success;       /*�Ƿ�ɹ���½*/
} MARSPROBE;        /*�Զ���ṹ��������*/
int Find(struct MarsProbe mar[],char Key[],int n){ /*��ѯ���� */
  /* Key�����ѯ�ؼ���,��Find���������ҵ���Ԫ�ص��±�*/
  int i=-1; /*��û�ҵ�������-1*/
  for(i=0;i<n;i++){
    if(strcmp(mar[i].Country,Key)==0){
      break;
    }
  }
  return i;
}
int main() {
    MARSPROBE  MP[]={
    {"����1A","Mars 1M","USSR",1960,650.0,'N'},
    {"������","Opport.","USA",2004,180.0,'Y'},
    {"������","Spirit","USA",2004,174.0,'Y'},
    {"������","Persev.","USA",2021,174.0,'Y'},
    {"ף�ں�","Zhurong","CHN",2021,240.0,'Y'}
  };
  int i=0;
  char Key[20];
  printf("����������һ���̽��������\n");
  gets(Key);
  strupr(Key); /*ת��Ϊ��д*/
  if((i=Find(MP,Key,5))>=0){  /*�Խṹ��������MP������ʵ��*/
    printf("������\tӢ����\t����\tʱ��\t����\t�ɹ���½��\n");
    printf("%s\t%s\t%s\t%d\t%.1f\t%c\n",MP[i].CName,MP[i].FName,
         MP[i].Country,MP[i].LaunchTime,MP[i].Weight,MP[i].Success);
    return 0;
  }
  else
    printf("����ʧ��\n");
}

