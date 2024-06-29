#include <stdio.h>
#include <stdlib.h>
#include <math.h> //3 5 2 4 1 => 1 2 3 4 5
int main()
{
    system("cls");
    // STUDENT write code here
    int a[20], i, j, k, b, temp;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (b = 0; b < 5; b++)
    {
        for (k = 0; k < 4; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }

    // Do not edit..
    printf("\nOUTPUT:\n");
    // STUDENT write output here
    for (j = 0; j < 5; j++)
    {
        printf("%d\t", a[j]);
    }
    // do not edit
    getchar;
    return 0;
    system("pause");
}