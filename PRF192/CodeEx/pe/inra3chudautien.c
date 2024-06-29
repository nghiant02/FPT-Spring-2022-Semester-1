#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char s[100];
    int i, count = 0, tmp = 0;
    gets(s);
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
 
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && tmp < 3)
        {
            while (s[i] != ' ')
            {
                count++;
                ++i;
                ;
            }
            tmp++;
        }
    }
    printf("%d", count);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

