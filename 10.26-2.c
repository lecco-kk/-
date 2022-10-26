#include<stdio.h>
int main()
{
	short a=0xf245,b,c;
	
	b=a<<8;
	c=a>>8;
	c=c&0x00ff;
	a=b+c;
	printf("a=%x",a);
	return 0;

}
