#include <stdio.h>
struct MarsProbe{
  char CName[20];    /*������*/
  char FName[20];    /*Ӣ����*/
  char Country[20];  /*����*/
  int LaunchTime;   /*����ʱ��*/
  float Weight;      /*����*/
  char Success;     /*�Ƿ�ɹ���½*/
};
int main() {
  struct MarsProbe MP[]={
    {"����1A","Mars 1M","USSR",1960,650.0,'N'},
    {"������","Opport.","USA",2004,180.0,'Y'},
    {"������","Spirit","USA",2004,174.0,'Y'},
    {"������","Persev.","USA",2021,174.0,'Y'},
    {"ף�ں�","Zhurong","CHN",2021,240.0,'Y'}
  };
  int i;
  printf("������\tӢ����\t����\tʱ��\t����\t�ɹ���½��\n");
  for(i=0;i<5;i++)
    printf("%s\t%s\t%s\t%d\t%.1f\t%c\n",MP[i].CName,MP[i].FName,
    MP[i].Country,MP[i].LaunchTime,MP[i].Weight,MP[i].Success);
  return 0;
}


