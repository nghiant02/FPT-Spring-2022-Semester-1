/*demo02.c,  Xuat bang ma ASCII */
#include<stdio.h> /* lay tac vu xuat printf */
#include<stdlib.h> /* lay tac vu goi he thong */
int main()
{ int code; /* di tu 0 den 255 --> chon kieu int */
  for (code=1; code<256; code++)
  {  printf("Ky tu %c, ma he 10:%d, he 16:%Xh\n", code, code, code);
  }
  system("pause");
  return 0;
}
