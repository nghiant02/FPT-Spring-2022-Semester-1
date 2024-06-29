#include <conio.h> 
#include <stdio.h> 
#include <string.h>

char doc_so[50];
char *docso(int n)
{
   char doc[10][5]={"","Mot","Hai","Ba","Bon","Nam","Sau","Bay","Tam","Chin"};
   doc_so[0]=0;
   int donvi=n%10;
   n=n/10;
   int chuc=n%10;
   int tram=n/10;
   if(tram>0)
   {
      strcat(doc_so,doc[tram]);
      strcat(doc_so," Tram ");
   }
   if(chuc>0)
   {
      if(chuc==1)
      strcat(doc_so," Muoi ");
      else       {
         strcat(doc_so,doc[chuc]);
         strcat(doc_so," Muoi ");
      }
   }
   if(donvi>0)
   strcat(doc_so,doc[donvi]);
   return doc_so;
}
int main()
{
   int n;
    printf("Nhap vao mot day so: ");
    scanf("%d",&n);
    if(n==0)
    {
      printf("Khong");
   }
   else    {
      int tram=n%1000;
      n=n/1000;
      int ngan=n%1000;
      n=n/1000;
      int trieu=n%1000;
      int ty=n/1000;
      if(ty>0)
      {
         printf("%s Ty",docso(ty));
      }
      if(trieu>0)
      {
         printf(" %s Trieu ",docso(trieu));
      }
      if(ngan>0)
      {
         printf(" %s Ngan ",docso(ngan));
      }
      if(tram>0)
      {
         printf(" %s ",docso(tram));
      }
   }
   getch();
}

