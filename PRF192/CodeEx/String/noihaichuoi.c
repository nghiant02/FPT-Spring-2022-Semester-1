#include <stdio.h> 
int main() {
  char s1[100] = "Lap trinh ", s2[] = "c co ban";
  int length, j;
  // chi?u d�i c?a h�ng c?a s1 trong bi?n chi?u d�i
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }
  // n?i s2 th�nh s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  // ch?m d?t chu?i s1
  s1[length] = '\0';
  printf("Chuoi sau cung: ");
  puts(s1);
  return 0;
}

