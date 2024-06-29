#include <stdio.h>
int main() {
  int j, i;
  printf("Enter the low end of the range: ");
  scanf("%d", &j);
  for (i = 3; i <= 7; ++i) {
    printf("%d * %d = %d \n", j, i, j * i);
  }
  return 0;
}

