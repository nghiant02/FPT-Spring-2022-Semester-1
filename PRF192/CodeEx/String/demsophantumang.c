#include <stdio.h>
#include <conio.h>
#include <string.h>
int demktso(char s[])
{
	int i,dem=0;
	for (i=0;i<strlen(s);i++)
        if ( s[i]>='0' && s[i]<='9' )
			dem++;
	return dem;
}
void main()
{
    char s[100];
    gets(s);
    printf("so ki tu so la  :  %d",demktso(s));
    getch(); 
}

