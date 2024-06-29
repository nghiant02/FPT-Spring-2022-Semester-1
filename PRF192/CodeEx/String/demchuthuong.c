#include <stdio.h>
#include <conio.h>
#include <string.h>
int demktthuong(char s[])
{
	int i,dem=0;
	for (i=0;i<strlen(s);i++)
        if ( s[i]>='a' && s[i]<='z' )
			dem++;
	return dem;
}
void main()
{
    char s[100];
    gets(s);
    printf("so ki tu thuong la  :  %d",demktthuong(s));
    getch(); 
}

