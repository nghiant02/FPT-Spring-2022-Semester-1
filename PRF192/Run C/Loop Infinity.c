#include<stdio.h>
int main()
{	int S=0, S2=100, i=0;
	goto Run_2;
	Run_1:
	if (i==0)
	{	printf ("\nHello-1\n");
		printf ("\nHello-2\n");
		printf ("\nHello-3\n");
	}
	Run_2:
		printf("%d\n", S2);
		goto Run_1;
	getchar();
	return 0;	
}
