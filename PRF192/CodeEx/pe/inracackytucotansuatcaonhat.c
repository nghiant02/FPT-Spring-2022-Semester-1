#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n, i, str[21], j, k, count = 0;
    char c[21];
    scanf("%d ", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%c", &c[i]);
        getchar();
    }
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 0; i < n; i++)
    {
        str[i] = 1;
        for (j = 0; j < n + 1; j++)
        {
            if (i != j)
            {
                if (c[i] == c[j])
                {
                    str[i]++;
                    for (k = j; k < n; k++)
                        c[k] = c[k + 1];
                    n--;
                    j--;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 2)
        {
            printf("%c", c[i]);
            if (count != 1)
                printf("\n");
            count++;
            if (count == 2)
                break;
        }
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

