#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int n=10;
	char S[11]="Hello";
	int m=9;
	printf("Variable n: addr:%u, value:%d\n",n,n);
	printf("Variable S: addr:%u\, value:%s\n",S,S);
	printf("Variable m: addr:%u\, value:%d\n",m,m);
	printf("The length of S:%d\n",strlen(S));
	getch();
	return 0;
}
