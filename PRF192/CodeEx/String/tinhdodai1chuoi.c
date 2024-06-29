#include <stdio.h> 
int main() {
    char s[] = "Chuong trinh dang chay";
    int i;
    for (i = 0; s[i] != '\0'; ++i);
      printf("Do dai mot chuoi: %d", i);
    return 0;
}

