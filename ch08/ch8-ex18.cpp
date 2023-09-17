#include "stdio.h"
#include "string.h"
struct SCO {
  char cCName[50];
  double dPopulation;
  double dTerritorialArea;
};
struct SCO * search(struct SCO * pCountry,char *pCName){
  int i;
  for(i=0;i<8;i++){
	 if(strcmp((pCountry +i)->cCName,pCName)==0){
	return pCountry +i;
	  }	
   }
   return NULL;
}
int main() {
  struct SCO country[8]={{"China",14.4349,960},{"Russia",1.44,1709.82},
                  {"Tajikistan",0.098,14.31},{"Kyrgyzstan",0.06362,19.99}, 
                  {"Uzbekistan",0.347,44.89},{"India",13.8,298.0},
                  {"Pakistan",2.25,79.6},{"Kazakhstan",0.1839,272.9}};
  char cSearch[50];
  struct SCO *pCountry = NULL; //定义结构体SCO类型的指针变量
  pCountry = country;  //使指针变量指向数组country的首地址
  printf("请输入待查询的国家名\n");
  gets(cSearch);
  if((pCountry =search(country,cSearch))!=NULL)
     printf("%10s: %7.2lf亿人  %7.2lf万平方公里\n", 
               pCountry ->cCName, 
               pCountry ->dPopulation, 
               pCountry ->dTerritorialArea);
  else
     printf("国家名错误！\n");
  return 0;
}