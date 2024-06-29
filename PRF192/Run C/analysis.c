#include <stdio.h>

#include <stdlib.h>

#include <string.h>

const int MAX = 50;
void showMenu(void);
void addNewAnEmployee(char code[][MAX], char name[][MAX],
  double salary[], double allowance[], int * size);
int findIndexOfEmployee(char code[][MAX], int size, char key[]);
void removeEmployeeByPos(char code[][MAX], char name[][MAX],
  double point[], double allowance[], int * size);
void showInformByPos(char code[][MAX], char name[][MAX], double salary[],
  double allowance[], int size);
void sortEmployee(char code[][MAX], char name[][MAX], double salary[],
  double allowance[], int size);
void showEmployeeList(char code[][MAX], char name[][MAX],
  double salary[], double allowance[], int size);
int main() {
  char code[MAX][9];
  char name[MAX][21];
  double salary[MAX];
  double allowance[MAX];
  int size = 0;
  int choose;
  char buffer;
  do {
    showMenu();
    do { //Choice
      printf("\nEnter your choose: ");
      scanf("%d", & choose);
      scanf("%c", & buffer);
      fflush(stdin);
      if (buffer != 10) {
        printf("\n do you know input integer number !!!");
      }
    } while (buffer != 10);
    switch (choose) { // choose option
    case 1: {
      addNewAnEmployee(code, name, salary, allowance, & size);
      printf("\n");
      break;
    }
    case 2: {
      showInformByPos(code, name, salary, allowance, size);
      printf("\n");
      break;
    }
    case 3: {
      removeEmployeeByPos(code, name, salary, allowance, & size);
      printf("\n");
      break;
    }
    case 4: {
      sortEmployee(code, name, salary, allowance, size);
      printf("\n");
      break;
    }
    case 5: {
      printf("\nHave a nice day!");
      return 1;
      break;
    }
    default: {
      printf("\nEnter your code from 1 to 5 !!!\n");
    }
    }
  } while (choose != 7);
}
void showMenu(void) { // show menu
  printf("\n1. Adding a new employee");
  printf("\n2. Finding data about employee");
  printf("\n3. Remove an employee");
  printf("\n4. Print the list in descending order");
  printf("\n5. Quit");
}
void addNewAnEmployee(char code[][MAX], char name[][MAX],
  double salary[], double allowance[], int * size) {
  printf("\nInput inform new employee: \n");
  //code
  while (1 == 1) {
    printf("\nEnter your code: ");
    gets(code[ * size]);
    while (strlen(code[ * size]) > 8 || strlen(code[ * size]) < 1) {
      printf("\nNo more than 1 - 8 code!!!");
      printf("\nPlz, code: ");
      gets(code[ * size]);
    }
    int isFind = 0;
    for (int i = 0; i <= * size - 1; i++) {
      if (strcmp(code[ * size], code[i]) == 0) {
        isFind = 1;
      }
    }
    if (isFind == 1) {
      printf("\nCode is duplicated");
    } else {
      break;
    }
  }
  printf("\nName: ");
  gets(name[ * size]);
  fflush(stdin);
  printf("\nSalary: ");
  scanf("%lf", & salary[ * size]);
  fflush(stdin);
  printf("\nAllowance: ");
  scanf("%lf", & allowance[ * size]);
  fflush(stdin);
  ( * size) ++;
}
void removeEmployeeByPos(char code[][MAX], char name[][MAX], double salary[], double allowance[], int * size) {
  char key[MAX];
  printf("\nEnter code which you want to remove: ");
  gets(key);
  int pos = findIndexOfEmployee(code, * size, key);
  if (pos == -1) {
    printf("\nAn employee not existed");
  } else {
    printf("\nAn employee before removing: ");
    printf("\n|%-8s|%-20s|%5.2lf|%5.2lf|",
      code[pos], name[pos], salary[pos], allowance[pos]);
    for (int i = pos; i <= * size - 1; i++) {
      strcpy(code[i], code[i + 1]);
      strcpy(name[i], name[i + 1]);
      salary[i] = salary[i + 1];
      allowance[i] = allowance[i + 1];
    }
    ( * size) --;
    printf("\nRemoving is successfull");
  }
}
void showInformByPos(char code[][MAX], char name[][MAX], double salary[],
  double allowance[], int size) {
  char key[MAX];
  printf("\nEnter your code you need: ");
  gets(key);
  int pos = findIndexOfEmployee(code, size, key);
  if (pos == -1) {
    printf("\nAn employee not existed");
  } else {
    printf("\n|%s|%s|%2lf|%2lf|",
      code[pos], name[pos], salary[pos], allowance[pos]);
  };
}
int findIndexOfEmployee(char code[][MAX], int size, char key[]) {
  for (int i = 0; i <= size - 1; i++) {
    if (strcmp(code[i], key) == 0) {
      return i;
    }
  }
  return -1;
}
void sortEmployee(char code[][MAX], char name[][MAX], double salary[], double allowance[], int size) {
  for (int i = 0; i <= size - 1; i++) {
    for (int j = size - 1; j > i; j--) {
      if (salary[i] + allowance[i] <= salary[j] + allowance[j]) {
        double tmp = salary[i];
        salary[i] = salary[j];
        salary[j] = tmp;
        char strTmp[MAX];
        strcpy(strTmp, code[i]);
        strcpy(code[i], code[j]);
        strcpy(code[j], strTmp);
        strcpy(strTmp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], strTmp);
        int tmp1 = allowance[i];
        allowance[i] = allowance[j];
        allowance[j] = tmp1;
      }
    }
  }
  showEmployeeList(code, name, salary, allowance, size);
}
void showEmployeeList(char code[][MAX], char name[][MAX],
  double salary[], double allowance[], int size) {
  if (size == 0) {
    printf("\nNothing to print");
    return ;
  }
  for (int i = 0; i <= size - 1; i++) {
    printf("\n|%s|%s|%2.lf|%2.lf|",
      code[i], name[i], salary[i], allowance[i]);
  }
}