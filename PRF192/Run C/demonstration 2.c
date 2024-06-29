#include <stdio.h>
int sumDivisors(int N)
{	int i,S=0;
	for (i=1;i<=N/2;i++)
		if (N%i==0)S+=i;
	return S;	
}
int main()
{	int n,sum;
	printf ("\nInput n=");
	scanf("%d",&n);
	sum = sumDivisors(n);
	printf("Result:%d\n",sum);
	getchar ();
	getchar ();
}
