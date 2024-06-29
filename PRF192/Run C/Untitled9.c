/*study_in_output*/
#include <stdio.h>
int n;
int main()
{ int m;
printf("var. n, add:%u\n", &n);
printf("var. m, add:%u\n", &m);
printf("main code, add:%u\n", &main);
printf("enter 2 intergers:");
scanf("%d%d", &n, &m);
printf("values entered:n=%d, m=%d\n", n, m);
getchar();
getchar();
return 0;
}
