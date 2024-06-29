/* ve hinh chu nhat */
#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i=0,ij;
	while(i<=9)
	{
		ij=0;
		while(ij++<=9)
			printf("%d",i);
		printf("\n");
		i++;	
	}
	getch();
}
