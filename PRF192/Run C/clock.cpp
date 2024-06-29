#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void add(char make[][20], char color[][20],	
	int price[], int guarantee[], int & n) {
  n++;
  printf("Please enter the %dth make: ", n);
  fflush(stdin);
  scanf("%[^\n]", make[n]);
  printf("Please enter the %dth color: ", n);
  fflush(stdin);
  scanf("%[^\n]", color[n]);
  printf("Please enter the %dth price: ", n);
  fflush(stdin);
  scanf("%d", & price[n]);
  printf("Please enter the %dth guarantee: ", n);
  fflush(stdin);
  scanf("%d", & guarantee[n]);
}
void print(char make[][20], char color[][20],	
	int price[], int guarantee[], int & n) {
  for (int i = 0; i <= n; i++) {
    printf("The information of %dth: ", i);
    printf("%s %s %d %d\n", make[i], color[i], price[i], guarantee[i]);
  }
}
void FindClock(char make[][20], char color[][20],	
	int price[], int guarantee[], int & n) {
  printf("Please enter the make you want to see: ");
  char str[MAX];
  fflush(stdin);
  scanf("%[^\n]", str);
  bool pos = 0;
  for (int i = 0; i <= n; i++) {
    if (strcmp(make[i], str) == 0) {
      pos = 1;
      printf("The information of %dth: ", i);
      printf("%s %s %d %d\n", make[i], color[i], price[i], guarantee[i]);
    }
  }
  if (pos == 0) {
    printf("Can not find the information of make\n");
  }
}
void printPrice(char make[][20], char color[][20],	
	int price[], int guarantee[], int & n) {
  int p1, p2;
  printf("Please enter the first price: \n");
  fflush(stdin);
  scanf("%d", & p1);
  printf("Please enter the second price: \n");
  fflush(stdin);
  scanf("%d", & p2);
  if (p1 > p2) {
    int tmp = p1;
    p1 = p2;
    p2 = tmp;
  }
  bool ok = 0;
  for (int i = 0; i <= n; i++) {
    if (price[i] >= p1 && price[i] <= p2) {
      printf("The information of %dth: \n", i);
      printf("%s %s %d %d\n", make[i], color[i], price[i], guarantee[i]);
      ok = 1;
    }
  }
  if (ok == 0) {
    printf("Sorry we can find out the Price\n");
  }
}
void sort(char make[][20], char color[][20],	
	int price[], int guarantee[], int & n) {
  for (int i = 0; i <= n - 1; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (price[i] < price[j]) {
        int t = price[i];
        price[i] = price[j];
        price[j] = t;
        char b[MAX];
        strcpy(b, make[i]);
        strcpy(make[i], make[j]);
        strcpy(make[j], b);
        char a[MAX];
        strcpy(a, color[i]);
        strcpy(color[i], color[j]);
        strcpy(color[j], a);
        int tmp = guarantee[i];
        guarantee[i] = guarantee[j];
        guarantee[j] = tmp;
      }
    }
  }
  for (int i = 0; i <= n - 1 ; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (price[i] < price[j]) {
        int t = price[i];
        price[i] = price[j];
        price[j] = t;
        char b[MAX];
        strcpy(b, make[i]);
        strcpy(make[i], make[j]);
        strcpy(make[j], b);
        char a[MAX];
        strcpy(a, color[i]);
        strcpy(color[i], color[j]);
        strcpy(color[j], a);
        int tmp = guarantee[i];
        guarantee[i] = guarantee[j];
        guarantee[j] = tmp;
        }
      }
    }
	print(make, color, price, guarantee, n);
}
int main() {
  int ch;
  int n = -1;
  do {
    printf("\n1-Adding a new clock");
    printf("\n2-Printing out clocks which belong to a known make");
    printf("\n3-Printing out clocks whose prices are between p1 and p2 ( integers)");
    printf("\n4-Printing the list in descending order based on prices");
    printf("\nPlease enter your choice: ");
    fflush(stdin);
    scanf("%d", & ch);
    char make[MAX][20], color[MAX][20];
    int guarantee[MAX], price[MAX];
    switch (ch) {
    case 1: {
      add(make, color, price, guarantee, n);
      break;
    }
    case 2: {
      FindClock(make, color, price, guarantee, n);
      break;
    }
    case 3: {
      printPrice(make, color, price, guarantee, n);
      break;
    }
    case 4: {
      sort(make, color, price, guarantee, n);
      break;
    }
    }
  } while (ch >= 1 && ch <= 4);
  return 0;
}