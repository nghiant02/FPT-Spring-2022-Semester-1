#include <stdio.h>
int main ()
{	int ia,ib;
	printf("nhap vao a:");
	scanf("%d",&ia);
	printf("nhap vao b:");
	scanf("%d",&ib);
	if (ia>ib)
	{
	printf("a lon hon b\n");
	}
	else if(ia<ib)
	printf("a nho hon b\n");
	else
	{
	printf("a bang b\n");
	}
	getchar();
	return 0;
}
