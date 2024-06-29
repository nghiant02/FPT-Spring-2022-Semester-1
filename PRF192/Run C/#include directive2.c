#include<stdio.h>
#include"myfunction.c"
int main()
{	int n;
	printf("Inout a positive integer:");
	scanf("%d",&n);
	if (is Prime(n)==1)printf("%d is a prime.\n",n);
	else printf ("%d is not a prime.\n",n);
	getchar();
	getchar();	
}
