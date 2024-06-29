/* demo04.c- On tap ve ep kieu du lieu */
#include<stdio.h> 
#include<stdlib.h>
int main()
{ char c1= 65; /* ky tu A */
  int m=c1;
  printf("c1=%d, m=%d\n",c1,m);
  int n=256;
  char c2= n;
  printf("n=%d, c2=%d\n",n, c2);
  double x=2.5;
  int t= x;
  printf("x=%lf, t=%d\n",x,t);
  system("pause");
  return 0;
}
