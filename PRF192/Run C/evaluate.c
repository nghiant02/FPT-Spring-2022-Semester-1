#include<stdio.h>
int isPrime (int n)
{	int i;
	for (i=2, i*i <=n; i++)
		if(n%i==0)return 0;
		return 1;
}
	double average(int a,int b, int c)
	{	return (a+b+c)/3.0;
	}
