#include<stdio.h>
#include<conio.h>
main()
{	int n=256, *p=&n;
	printf("n=%d\n",n);
	char *pp=(char*)p;
	*pp=0;
	printf("n=%d\n",n);
	getch();
}
