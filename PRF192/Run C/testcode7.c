
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define ENTER 10
int main()
{	char c;
	int vowels=0, consonants=0, others=0;
	printf("nhap cac ky tu ket thuc bang ESC\n");
	do
	{	scanf("%c",&c);
		c=toupper(c);
		if (c!=ENTER)
		{	if (c>='A'&&c<='Z')
			{	if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')vowels++;
				else consonants++;
			}
			else others++;
		}
	}
	while (c!=ENTER);
	printf("so nguyen am:%d\n",vowels);
	printf("so phu am:%d\n",consonants);
	printf("so ky tu khac:%d\n",others);
	system("pause");
	return 0;
}
