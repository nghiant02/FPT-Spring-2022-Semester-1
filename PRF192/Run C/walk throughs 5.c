#include<stdio.h>
int main()
{
	int n=7,m=8;
	int *p1 = &n,*p2=&m;
	*p1+=5+3*(*p2)-n;
	*p2 = 5*(*p1)-4*m+2*n;
	printf("m=%d,n=%d",m,n);
}
