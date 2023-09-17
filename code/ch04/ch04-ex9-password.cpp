	#include<stdio.h>
	int main() {
		int i,x;
		int y = 0;              /*通过y变量判断for循环执行完是正确还是错误*/
		int code = 112233 ;      /*设定初始密码*/
		for (i = 0; i < 3; i++) {    /*循环3次*/
			printf("请输入密码");    
			scanf("%d", &x);
			if (x == code) {     /*用户输入的密码与初始密码一致*/
				printf("登录成功\n");
				y = 1;          /*密码正确则循环外的if条件不执行*/
				break;          /*结束循环*/
			} else
				printf("密码错误，请重新输入\n");
		}
		if (y == 0) { /*循环结束后，y变量仍是0，说明循环内输入了3次错误密码*/
			printf("错误三次，程序退出！");
		}
	}

