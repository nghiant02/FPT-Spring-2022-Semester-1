#include<stdio.h>
void swap1(int x,int y)
{	int t=x;
	x=y;
	y=t;
}
int main()
{	int a=5, b=7;
	printf("a=%d,b=%d\n",a,b);
	swap1(a,b);
	printf("a=%d,b=%d\n",a,b);
	getchar();
	return 0;
}
	

