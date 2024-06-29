#include<stdio.h>

#include<stdlib.h>

int choice() {
  int choice;
  printf("\nSelect conversion:\n");
  printf("1. Convert binary number to decimal number.\n");
  printf("2. Convert octal number to decimal number.\n");
  printf("3. Convert hexadecimal number to decimal number.\n");
  printf("4. Exit.\n");
  printf("Please choose number (1 - 4):");
  scanf("%d", & choice);
  return choice;
}
int BinaryToDecimal() {
  int num, binary_num, decimal_num = 0, base = 1, rem;
  printf("Enter a binary number:");
  scanf("%d", & num);
  binary_num = num;
  while (num > 0) {
    rem = num % 10;
    decimal_num = decimal_num + rem * base;
    num = num / 10;
    base = base * 2;
  }
  printf("The decimal number is:%d", decimal_num);
}
int OctalToDecimal() {
  int octal;
  printf("Enter a Octal number:");
  scanf("%o", & octal);
  printf("Decimal number is:%d", octal);
}
int HexadecimalToDecimal() {
  int hexadecimal;
  printf("Enter a Hexadecima:");
  scanf("%x", & hexadecimal);
  printf("Decimal number is:%d", hexadecimal);
}
int main() {
  int userChoice;

  do {
    if (userChoice == 4) {
      printf("Thank for using app!");
      return 0;
    }
    userChoice = choice();
    switch (userChoice) {
    case 1:
      BinaryToDecimal();
      break;
    case 2:
      OctalToDecimal();
      break;
    case 3:
      HexadecimalToDecimal();
      break;
    }

  } while (userChoice != 99);
  getchar;
  return 0;
}
