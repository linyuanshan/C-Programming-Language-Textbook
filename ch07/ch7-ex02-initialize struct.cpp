#include <stdio.h>
struct MarsProbe{
  char CName[20];      /*������*/
  char FName[20];      /*Ӣ����*/
  char Country[20];     /*����*/
  int  LaunchTime;    /*����ʱ��*/
  float Weight;       /*����*/
  char Success;      /*�Ƿ�ɹ���½*/
};
int main() {
  struct MarsProbe mar1={"ף�ں�","Zhurong","CHN",2021,240.0,'Y'};
  printf("������\tӢ����\t����\tʱ��\t����\t�ɹ���½��\n");
  printf("%s\t%s\t%s\t%d\t%.1f\t%c\n",mar1.CName,mar1.FName,
        mar1.Country,mar1.LaunchTime,mar1.Weight,mar1.Success);
  return 0;
}



