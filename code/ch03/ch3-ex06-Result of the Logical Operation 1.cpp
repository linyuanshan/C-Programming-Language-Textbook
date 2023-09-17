	#include <stdio.h>
	int main()
	  {
		int a = 0, b = 10, c = -6;
		int result_1 = a&&b, result_2 = c||0;
		printf("%d, %d\n", result_1, !c);
		printf("%d, %d\n", 9&&0, result_2);
		printf("%d, %d\n", b||100, 0&&0);
		return 0;
	  }

