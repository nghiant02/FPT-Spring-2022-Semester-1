#include <conio.h> 
#include <stdio.h> 
#include <string.h>  //thu vi?n chu?i

int main()
{
    char xau[30];
    printf("Nhap vao 1 chuoi: ");
    gets(xau);
    for(int i=strlen(xau)-1;i>=0;i--)  //strlen tr? v? d? dài c?a chu?i
    {
        printf("%c",xau[i]);
    }
    getch();
}
