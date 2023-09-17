#include <stdio.h>
struct MarsProbe{
  char CName[20];      /*中文名*/
  char FName[20];      /*英文名*/
  char Country[20];     /*国家*/
  int  LaunchTime;    /*发射时间*/
  float Weight;       /*重量*/
  char Success;      /*是否成功着陆*/
};
int main() {
  struct MarsProbe mar1={"祝融号","Zhurong","CHN",2021,240.0,'Y'};
  printf("中文名\t英文名\t国家\t时间\t重量\t成功着陆？\n");
  printf("%s\t%s\t%s\t%d\t%.1f\t%c\n",mar1.CName,mar1.FName,
        mar1.Country,mar1.LaunchTime,mar1.Weight,mar1.Success);
  return 0;
}



