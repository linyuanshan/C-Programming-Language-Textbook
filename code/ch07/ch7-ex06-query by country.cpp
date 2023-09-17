#include <stdio.h>
#include <string.h>
typedef struct MarsProbe{
  char CName[20];    /*中文名*/
  char FName[20];    /*英文名*/
  char Country[20];   /*国家*/
  int  LaunchTime;   /*发射时间*/
  float Weight;       /*重量*/
  char Success;       /*是否成功着陆*/
} MARSPROBE;        /*自定义结构体类型名*/
int Find(struct MarsProbe mar[],char Key[],int n){ /*查询函数 */
  /* Key代表查询关键字,，Find函数返回找到的元素的下标*/
  int i=-1; /*若没找到，返回-1*/
  for(i=0;i<n;i++){
    if(strcmp(mar[i].Country,Key)==0){
      break;
    }
  }
  return i;
}
int main() {
    MARSPROBE  MP[]={
    {"火星1A","Mars 1M","USSR",1960,650.0,'N'},
    {"机遇号","Opport.","USA",2004,180.0,'Y'},
    {"勇气号","Spirit","USA",2004,174.0,'Y'},
    {"毅力号","Persev.","USA",2021,174.0,'Y'},
    {"祝融号","Zhurong","CHN",2021,240.0,'Y'}
  };
  int i=0;
  char Key[20];
  printf("请输入待查找火星探测器国家\n");
  gets(Key);
  strupr(Key); /*转换为大写*/
  if((i=Find(MP,Key,5))>=0){  /*以结构体数组名MP做函数实参*/
    printf("中文名\t英文名\t国家\t时间\t重量\t成功着陆？\n");
    printf("%s\t%s\t%s\t%d\t%.1f\t%c\n",MP[i].CName,MP[i].FName,
         MP[i].Country,MP[i].LaunchTime,MP[i].Weight,MP[i].Success);
    return 0;
  }
  else
    printf("查找失败\n");
}

