	#include <stdio.h>
	int main() {
		int x,k = 0;
		printf("请输入100~300之间的任意整数，来猜猜盲盒数字密码，看看第几次能猜对：\n您猜的密码是：");
		/*只要输入的形式符合，就循环下去*/ 
		while(scanf("%d",&x) == 1) {     /* scanf("%d",&x) 返回值为1 */
			if(x>100&&x<300) {       /*输入100~300之间的任意整数*/ 
				k++;                /* k记录次数*/
				if(x == 150) {        /*数字密码*/
					printf("恭喜您，第%d次就猜对了，盲盒已打开\n",k);
					break;         /*退出循环*/
				} else
					printf("不对哦，记录一次，再猜！\n您猜的密码是：");
			} else
				printf("超出范围了，不计数，重新猜哦！\n您猜的密码是：");
		}
	}

