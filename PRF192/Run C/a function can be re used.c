#include <stdio.h>
int main()
{	int n,i;
	printf("\nInput n=");
	scanf("%d",&n);
	for (i=1;i<=n/2;i++)
		if (n%i==0) printf("%d,",i);
	printf("\nInput n=");
	scanf("%d",&n);
	for (i=1;i<=n/2;i++)
		if (n%i==0) printf("%d,",i);
	printf("\nInput n=");
	scanf("%d",&n);
	for (i=1;i<=n/2;i++)
		if (n%i==0) printf("%d,",i);
	getchar ();
	getchar ();	
}
