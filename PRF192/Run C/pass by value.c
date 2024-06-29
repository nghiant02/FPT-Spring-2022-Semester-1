#include<stdio.h>
#include<conio.h>
int maxN=100;
double pi=3.14592;
double CalcImp(double r1,double r2,double r3);
{	double t=1/(1/r1 + 1/r2 + 1/r3);
	printf(" r1		Addr:%u,value:%lf\n",&r1,r1);
	printf(" r2		Addr:%u,value:%lf\n",&r2,r2);
	printf(" r3		Addr:%u,value:%lf\n",&r3,r3);
	printf(" t		Addr:%u,value:%lf\n",&t,t);
	return t;
}
int main()
{	double R1=3,R2=8,R3=9;
	printf("maxN	Addr:%u,value:%d\n",&maxN,maxN);
	printf("pi	Addr:%u,value:%lf\n",&pi,pi);
	printf("R1	Addr:%u,value:%lf\n",&R1,R1);
	printf("R2	Addr:%u,value:%lf\n",&R2,R2);
	printf("R3	Addr:%u,value:%lf\n",&R3,R3);
	printf("main	addr:%u\n",&main);
	printf("CalcImp	addr:%u\n",&CalcImp);	
	printf("Impedance:%lf",CalcImp(R1,R2,R3));	
	getch();
}
