	#include <stdio.h>
	int main() {     
	int i; // 循环变量
	   for (i = 0; i < 1000; i ++){ // 从0开始到1000 
	if (i % 3 == 0 &&i % 10 == 6){ // 如果被3整除且个位数为6
	printf("%d  ", i); // 输出当前数和一个空格
	}
	}
	return 0; 
	}


