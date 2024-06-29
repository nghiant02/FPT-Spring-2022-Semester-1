#include<stdio.h>
void swapDouble2 (double *p1,double *p2)
{	double t=*p1;
	*p1=*p2;
	*p2=t;
}
int main()
{	double x,y;
	printf("enter 2 real numbers:");
	scanf("%lf%lf",&x,&y);
	swapDoulbe2(x,y);
	printf("after swapping x=%lf,y=%lf\n",x,y);
	fflush(stdin);
	getchar();
	return 0;
}
