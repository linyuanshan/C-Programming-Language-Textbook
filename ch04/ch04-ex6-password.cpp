	#include "stdio.h"
	main() {                               /*登录，判断用户密码*/
		int password;                         /*定义变量并初始化*/
		do {
			 printf("请输入用户登录密码:");
			 scanf("%d",&password);          /*输入密码*/
			 if(password!=123456)            /*密码错误*/
			 printf("密码错误，");
		   } while(password!=123456);         /*条件表达式*/
		printf("登录成功");
	}

