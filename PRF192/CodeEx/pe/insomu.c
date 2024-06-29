#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int a, tmp, flag = 0;
    scanf("%d", &a);
    tmp = a;
    while (a % 2 == 0)
    {
        a /= 2;
        flag++;
    }
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (a == 1)
    {
        printf("%d", flag);
    }
    else
    {
        printf("%d is not a power of 2", tmp);
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

