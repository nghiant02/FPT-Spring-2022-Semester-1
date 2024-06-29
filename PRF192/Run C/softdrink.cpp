#include <stdio.h>

#include <ctype.h>

#include <string.h>

#define MAX 100
void add(char name[][20], char make[][20], int volume[], int price[], int duration[], int & n) {
  n++;
  printf("please enter the %dth name: ", n);
  fflush(stdin);
  scanf("%[^\n]", name[n]);
  printf("please enter the %dth make: ", n);
  fflush(stdin);
  scanf("%[^\n]", make[n]);
  printf("please enter the %dth volumn: ", n);
  fflush(stdin);
  scanf("%d", & volume[n]);
  printf("please enter the %dth price: ", n);
  fflush(stdin);
  scanf("%d", & price[n]);
  printf("please enter the %dth duration: ", n);
  fflush(stdin);
  scanf("%d", & duration[n]);
}
void print(char name[][20], char make[][20], int volume[], int price[], int duration[], int & n) {
  for (int i = 0; i <= n; i++) {
    printf("The information of %dth: ", i);
    printf("%s %s %d %d %d\n", name[i], make[i], volume[i], price[i], duration[i]);
  }
}
void FindItem(char name[][20], char make[][20], int volume[], int price[], int duration[], int & n) {
  printf("Please enter the make you want to see: ");
  char str[MAX];
  fflush(stdin);
  scanf("%[^\n]", str);
  bool pos = 0;
  for (int i = 0; i <= n; i++) {
    if (strcmp(make[i], str) == 0) {
      pos = 1;
      printf("The information of %dth: ", i);
      printf("%s %s %d %d %d\n", name[i], make[i], volume[i], price[i], duration[i]);
    }
  }
  if (pos == 0) {
    printf("Can not find the information of make\n");
  }
}
void printVolume(char name[][20], char make[][20], int volume[], int price[], int duration[], int & n) {
  int p1, p2;
  printf("Please enter the first volume: ");
  fflush(stdin);
  scanf("%d", & p1);
  printf("Please enter the second volume: ");
  fflush(stdin);
  scanf("%d", & p2);
  if (p1 > p2) {
    int tmp = p1;
    p1 = p2;
    p2 = tmp;
  }
  bool ok = 0;
  for (int i = 0; i <= n; i++) {
    if (volume[i] >= p1 && volume[i] <= p2) {
      printf("The information of %dth: ", i);
      printf("%s %s %d %d %d\n", name[i], make[i], volume[i], price[i], duration[i]);
      ok = 1;
    }
  }
  if (ok == 0) {
    printf("Sorry we can find out the Volume\n");
  }
}
void sort(char name[][20], char make[][20], int volume[], int price[], int duration[], int & n) {
  for (int i = 0; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (volume[i] > volume[j]) {
        int t = price[i];
        price[i] = price[j];
        price[j] = t;
        char b[MAX];
        strcpy(b, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], b);
        char a[MAX];
        strcpy(a, make[i]);
        strcpy(make[i], make[j]);
        strcpy(make[j], a);
        int tmp = duration[i];
        duration[i] = duration[j];
        duration[j] = duration[i];
        int tmp1 = volume[i];
        volume[i] = volume[j];
        volume[j] = tmp1;
      }
    }
  }
  for (int i = 0; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (volume[i] == volume[j]) {
        if (price[i] > price[j]) {
          int t = price[i];
          price[i] = price[j];
          price[j] = t;
          char b[MAX];
          strcpy(b, name[i]);
          strcpy(name[i], name[j]);
          strcpy(name[j], b);
          char a[MAX];
          strcpy(a, make[i]);
          strcpy(make[i], make[j]);
          strcpy(make[j], a);
          int tmp = duration[i];
          duration[i] = duration[j];
          duration[j] = duration[i];
          int tmp1 = volume[i];
          volume[i] = volume[j];
          volume[j] = tmp1;
        }
      }
    }
  }
  print(name, make, volume, price, duration, n);
}
int main() {
  int ch;
  int n = -1;
  do {
    printf("1-Adding a new soft drink\n");
    printf("2-Printing out items which belong to a known make\n");
    printf("3-Printing out items whose volumes are between v1 and v2 ( integers)\n");
    printf("4-Printing the list in ascending order based on volumes then prices.\n");
    printf("Please enter your choice: ");
    fflush(stdin);
    scanf("%d", & ch);
    char make[MAX][20], name[MAX][20];
    int duration[MAX], volume[MAX], price[MAX];
    switch (ch) {
    case 1: {
      add(name, make, volume, price, duration, n);
      break;
    }
    case 2: {
      FindItem(name, make, volume, price, duration, n);
      break;
    }
    case 3: {
      printVolume(name, make, volume, price, duration, n);
      break;
    }
    case 4: {
      sort(name, make, volume, price, duration, n);
      break;
    }
    }
  } while (ch >= 1 && ch <= 4);
  return 0;
}