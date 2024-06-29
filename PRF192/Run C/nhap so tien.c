#include<stdio.h>
#define MAXN 100
void intput(int*a,int n);
int max(int a[],int n);
void print(int*a,int n);
void printEven(int*a,int n);
int main()
{	int a[MAXN];
	int n;
	int maxVal;
	do
	{printf("How many elements which will be used 1..%d",MAXN);
	scanf("%d",&n);
	}
	while(n<1 || n>MAXN);
	printf("Enter %d values of the arrays:\n",n);
	input(a,n);
	maxVal = max(a,n);
	printf("Max value:%d\n",maxVal);
	printf("\nInputted array:");
	print(a,n);
	printf("\nEven values in array:");
	printEven(a,n);
	while(getchar()!='\n');getchar();
	return 0;
}
