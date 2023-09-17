#include <stdio.h>
struct MarsProbe{
  char CName[20];    /*中文名*/
  char FName[20];    /*英文名*/
  char Country[20];   /*国家*/
  int  LaunchTime;   /*发射时间*/
  float Weight;       /*重量*/
  char Success;       /*是否成功着陆*/
};
void sort(struct MarsProbe mar[],int n){   /*数组mar[]作形参，n为探测器数量*/
  int i,j;
  struct MarsProbe temp;
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++){
      if(mar[i].Weight>mar[j].Weight){
        temp=mar[i];
        mar[i]=mar[j];
        mar[j]=temp;
      }
    }
  }
int main() {
  struct MarsProbe MP[]={
    {"火星1A","Mars 1M","USSR",1960,650.0,'N'},
    {"机遇号","Opport.","USA",2004,180.0,'Y'},
    {"勇气号","Spirit","USA",2004,174.0,'Y'},
    {"毅力号","Persev.","USA",2021,174.0,'Y'},
    {"祝融号","Zhurong","CHN",2021,240.0,'Y'}
  };
  int i;
  sort(MP,5); /*数组名MP作实参，5为探测器数量*/
  printf("中文名\t英文名\t国家\t时间\t重量\t成功着陆？\n");
  for(i=0;i<5;i++)
  printf("%s\t%s\t%s\t%d\t%.1f\t%c\n",MP[i].CName,MP[i].FName,MP[i].Country,
  MP[i].LaunchTime,MP[i].Weight,MP[i].Success);
  return 0;
}




