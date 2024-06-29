/*ar_ops.c arithmetic operators demo.*/
#include<stdio.h>
int main()
{ int n=30,m=7;
printf("%d, %d\n, n/m, n%m");
int t=--m;
printf("presix increasing operator: t=%d, m=%d\n", t, m);
int k=m--;
printf("presix increasing operator: k=%d, m=%d\n", k, m);
getchar();
return 0;
}
