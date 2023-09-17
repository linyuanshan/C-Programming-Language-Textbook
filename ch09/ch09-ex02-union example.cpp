#include <stdio.h> 
int main(int argc, char *argv[]) {
		union{
			char ch;
			short shint;
			int loint;
		}number;
		printf("number占用空间%d字节\n",sizeof(number));
		printf("number.ch占用空间%d字节\n",sizeof(number));
		printf("number.shint占用空间%d字节\n",sizeof(number.shint));
		printf("number.loint占用空间%d字节\n",sizeof(number.loint));
		number.loint=0x12345678;
		printf("%x %x %x\n",number.ch,number.shint,number.loint);
		number.shint=0x5566;
		printf("%x %x %x\n",number.ch,number.shint,number.loint);
		number.ch=0x41;
		printf("%x %x %x\n",number.ch,number.shint,number.loint);
		return 0;
}


