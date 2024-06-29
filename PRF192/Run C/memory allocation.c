#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={2,4};
	int i;
	for(i=0;i<4;i++)
	printf("a[%d],addr:%u,%u\n",i,a+i,&a[i]);
	for(i=0;i<4;i++)
	printf("a[%d],value:%d,%d\n",i,*(a+i),a[i]);
	getchar();
	return 0;
 } 
