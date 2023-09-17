#include "stdio.h"    
int main() {
  double dPopulation;         //定义人口变量
  double dTerritorialArea;     //定义面积变量
  double *pP,*pTA;           //定义两个指针变量
  pP=&dPopulation;   //pP指向变量dPopulation
  pTA=&dTerritorialArea; //pTA指向变量dTerritorialArea
  printf("请输入中国人口(/亿)\n");
  scanf("%lf",pP);       //使用指针变量pP输入人口
  printf("请输入中国面积(/万平方公里)\n");
  scanf("%lf",pTA);     //使用指针变量pTA输入面积
  //指针变量*pP,*pTA引用dPopulation和dTerritorialArea
  printf("中国人口数量:%lf亿\n国土面积：%lf万平方公里\n",*pP,*pTA);
  return 0;
}

