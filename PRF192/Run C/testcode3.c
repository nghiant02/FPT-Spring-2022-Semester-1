/* demo03.c – Tim hieu ve toan tu trong C*/
#include<stdio.h> /* lay tac vu xuat printf */
#include<stdlib.h> /* lay tac vu goi he thong */
int main()
{ int m=20; 
  printf("m=%d\n",m);
  int n = m%3;
  printf("n=m%%3=%d, toan tu modulo lay phan du cua phep chia\n", n);
  n= m>>2;
  printf("n=m>>2=%d, dich phai 1 bit la chia doi\n", n);
  n= m<<2;
  printf("n=m<<2=%d, dich trai 2 bit la nhan 4\n", n);
  printf("n<m=%d, 0: FALSE, 1: TRUE\n", n<m);
  double x=2.5;
 /* printf("x=%lf, dich phai 1 bit: %lf\n", x, x>>1);*/
  printf("KHONG DUNG TOAN TU DICH CHO SO THUC\n");
  char c1= 'A';
  printf("c1: %c, ASCII: %d\n", c1, c1);
  char c2= c1+1;
  printf("c2=c1+1 -->%c, ASCII: %d\n", c2, c2);
  system("pause");
  return 0;
}
