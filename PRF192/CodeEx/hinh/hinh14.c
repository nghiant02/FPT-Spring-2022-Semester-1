/*
 
9
* * * * * * * * *
* *           * *
*   *       *   *
*     *   *     *
*       *       *
*     *   *     *
*   *       *   *
* *           * *
* * * * * * * * *
 
*/
 
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == j || j == 1 || j == n || i == n || i + j == n + 1)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

