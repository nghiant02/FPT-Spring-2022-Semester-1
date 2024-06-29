#include <stdio.h>
int main()
{  char c1, c2;
   printf("Input the 1st character:");
   scanf("%c", &c1);
   printf("Input the 2st character:");
   c2 = getchar();
   printf("c1=%c, ASCII:%d\n", c1, c1);
   printf("c2=%c, ASCII:%d\n", c2, c2);
   getchar();
}

