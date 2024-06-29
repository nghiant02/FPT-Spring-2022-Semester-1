
#include<stdio.h> 
#include<stdlib.h> 
double x=5.12;
float y=0.56;
char c1='C'; 
int main()
{	int n=5;
	long m=100; 
	char c2='B'; 	
	printf("Bien x- dia chi:%u, kich thuoc:%d byte(s),tri:%d\n",&x,sizeof(x),x);
	printf("Bien y- dia chi:%u, kich thuoc:%d byte(s),tri:%lf\n",&y,sizeof(float),y);	
	printf("Bien c1- dia chi:%u, kich thuoc:%d byte(s),tri:%d\n",&c1,sizeof(c1),c1);
	printf("Bien n- dia chi:%u, kich thuoc:%d byte(s),tri:%d\n",&n,sizeof(n),n);	
	printf("Bien m- dia chi:%u, kich thuoc:%d byte(s),tri:%ld\n", &m,sizeof(long),m);
	printf("Bien c2- dia chi:%u, kich thuoc:%d byte(s),tri:%lf\n",&y,sizeof(c2),c2);
	printf("Ham main duoc dat tai dia chi:%u\n", &main);
	system("pause");
	return 0;
}
