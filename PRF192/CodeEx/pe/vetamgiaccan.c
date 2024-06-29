#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", & n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i, j;

  for (i = 0; i < 2 * n - 1; i++) //In cot dung de in 2*n so cot chua sao nhu n=4 thi co 8 cot chua sao
  {
    //Trong vong for nay dung de in hang
    for (j = 0; j < n; j++) //Trong 1 hang toi da la n sao 
    {
      if (i >= n - 1 - j && i <= n - 1 + j)
        /*i>= n -1 - j: Dieu kien in ra so sao hang phia duoi*/
        /*i <= n -1 +j: Dieu kien in ra so sao o hang phia tren*/
        printf("*");
      else printf(" ");
    }
    printf("\n");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
