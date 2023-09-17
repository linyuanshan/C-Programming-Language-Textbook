	#include <stdio.h>
	int main()
	{
	  char c;
	  printf("Input a character:");
	  c=getchar();
	  if(c>='0'&&c<='9')
		printf("This is a digit\n");
	  else if(c>='A'&&c<='Z')
		printf("This is a upper case letter\n");
	  else if(c>='a'&&c<='z')
		printf("This is a lower case letter\n");
	  else
		printf("This is an other character\n");
	  return 0;
	}

