/* demo01.c – Tim hieu ve kieu du lieu, bien, truy xuat bo nho */
#include<stdio.h> /* lay tac vu xuat printf */
#include<stdlib.h> /* lay tac vu goi he thong */
int n=10; /* bien toan cuc*/
char c='A'; 
int main()
{ long m=20; /* bien cuc bo */
  float x=2.5f;
  double y=1.25; 
  printf("Bien n- dia chi:%u, kich thuoc:%d byte(s),tri:%d\n",  &n,sizeof(n),n);
  printf("Bien c- dia chi:%u, kich thuoc:%d byte(s),tri:%d\n",   &c,sizeof(c),c);
  printf("Bien m- dia chi:%u, kich thuoc:%d byte(s),tri:%ld\n", &m,sizeof(long),m);
  printf("Bien x- dia chi:%u, kich thuoc:%d byte(s),tri:%f\n",    &x,sizeof(float),x);
  printf("Bien y- dia chi:%u, kich thuoc:%d byte(s),tri:%lf\n",   &y,sizeof(y),y);
  printf("Ham main duoc dat tai dia chi:%u\n", &main);
  system("pause");
  return 0;
}
