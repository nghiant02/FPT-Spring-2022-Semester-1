#include<stdio.h>

#include<stdlib.h>

#include<math.h>

int choice() {
  int choice;
  printf("\n1- Quadratic equation ");
  printf("\n2- Bank deposit problem");
  printf("\n3- Quit");
  printf("\nChoose: ");
  scanf("%d%*c", & choice);
  return choice;
}
void function1() {
  double number, squareRoot;
  printf("Enter a number: ");
  scanf("%lf", & number);
  squareRoot = sqrt(number);
  printf("Square root of %.0lf =  %.0lf", number, squareRoot);
}
void function2() {
  double x, r, P;
  int y;
  printf("Enter your deposit[a positive number]: ");
  scanf("%lf", & x);
  printf("\nEnter the yearly rate[0.0-1.0]: ");
  scanf("%lf", & r);
  printf("\nHow many years you want to deposit[year>0]: ");
  scanf("%d", & y);
  P = x * pow((1 + r), y);
  printf("\nAmount at the %d year is %.0lf ", y, P);
}
int main() {
  int userChoice;
  do {
    userChoice = choice();
    switch (userChoice) {
    case 1:
      function1();
      break;
    case 2:
      function2();
      break;
    default:
      printf("Bye!\n");
    }
  }
  while (userChoice > 0 && userChoice < 3);
  fflush(stdin);
  getchar();
  return 0;
}
