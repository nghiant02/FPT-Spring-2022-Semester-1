#include<stdio.h>
int isPrime (int n)
{	int result=1, i;
	for (i=2; i*i<=n && result==1;i++)
		if (n%i==0) result=0;
	return result;	
}
void print_n_primes(int n)
{	int count =0;/* count primes printed*/
	int value =2;/*current value is considered*/
	while (count<n)
	{	if (isprime(value)==1)
			{	printf("%d",value);
				count++;
			}
		value++;
	}
}
int main()
{ int n;
	printf ("input number of primes:");
	scanf("%d",&n);
	printf_n_Primes(n);
	getchar();
	getchar();
	return 0;
}
