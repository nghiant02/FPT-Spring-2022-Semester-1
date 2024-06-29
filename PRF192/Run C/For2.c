#include<stdio.h>
int main()
{	int n,i;
	printf("n=");
	scanf("%d", &n);
	/*form 1*/
	int sum1=0;
	for (i=1; i<=n; i++)sum1 +=i;
	printf("\nsum1=%d",sum1);
	/*form 2*/
	int sum2;
	for (sum2=0, i=1; i<=n;i++,sum2+=i);
	printf("\nsum2=%d",sum2);
	/*form 2*/
	int sum3=0;
	i=1;
	for(;i<=n;)
	{sum3+=i;
	i++;
	}
	printf ("\nsum3=%d",sum3);
	getchar();getchar();
	return 0;
}

