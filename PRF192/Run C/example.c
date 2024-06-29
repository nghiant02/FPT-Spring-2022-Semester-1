#include <stdio.h>
int main ()
{	int x,sum=0;
	do{ 
	printf("%d",&x);
	x++;
	sum+=x;
}
	while(x!=0);
	getchar ();	
}
