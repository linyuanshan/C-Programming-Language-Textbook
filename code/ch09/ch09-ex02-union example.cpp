#include <stdio.h> 
int main(int argc, char *argv[]) {
		union{
			char ch;
			short shint;
			int loint;
		}number;
		printf("numberռ�ÿռ�%d�ֽ�\n",sizeof(number));
		printf("number.chռ�ÿռ�%d�ֽ�\n",sizeof(number));
		printf("number.shintռ�ÿռ�%d�ֽ�\n",sizeof(number.shint));
		printf("number.lointռ�ÿռ�%d�ֽ�\n",sizeof(number.loint));
		number.loint=0x12345678;
		printf("%x %x %x\n",number.ch,number.shint,number.loint);
		number.shint=0x5566;
		printf("%x %x %x\n",number.ch,number.shint,number.loint);
		number.ch=0x41;
		printf("%x %x %x\n",number.ch,number.shint,number.loint);
		return 0;
}


