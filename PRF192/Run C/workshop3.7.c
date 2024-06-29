#include<stdio.h>

int sumDigits(int n) {
  int sum = 0;
  do {
    int remainder = n % 10;
    n = n / 10;
    sum += remainder;
  }
  while (n > 0);
  return sum;
}
int main() {
  int s, n;
  do {
    printf("\nEnter n :");
    scanf("%d", & n);
    if (n >= 0) {
      s = sumDigits(n);
      printf(" S = %d ", s);
    }

  } while (n >= 0);
  return 0;
}
