#include <conio.h> 
#include <stdio.h> 
#include <string.h>

int main()
{
    char xau[30];
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    for(int i=0;i<strlen(xau);i++)
    {
        if(xau[i]!=32)
        {
            printf("%c",xau[i]);
        }
        else         {
         for(int j=strlen(xau)-1;j>=i;j--)
         {
            if(xau[j]==32)
            {
               for(int k=j;k<=strlen(xau)-1;k++)
               printf("%c",xau[k]);
               break;
            }
         }
         break;
      }
    }
    getch();
}



