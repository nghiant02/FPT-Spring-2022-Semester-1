#include<stdio.h>

int gcd(int a, int b) {
  while (a != b)
    if (a > b) {
      a -= b;
    }
  else {
    b -= a;
  }
  return a;
}
int lcm(int a, int b) {
  return a * b / gcd(a, b);
}
int main() {
  int a, b, d, m;
  do {
    printf("Enter a: ");
    scanf("%d", & a);
    printf("Enter b: ");
    scanf("%d", & b);
  }
  while (a <= 0 || b <= 0);
  d = gcd(a, b);
  m = lcm(a, b);
  printf(" d = %d", d);
  printf(" m = %d", m);
  return 0;
}
