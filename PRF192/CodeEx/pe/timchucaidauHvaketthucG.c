#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char s[100];
    gets(s);
    int i, j, count = 0;
    char tmp[50][50];
    for (i = 0; i < strlen(s); i++)
    {
        j = 0;
 
        while (s[i] != ' ' && s[i] != '\0')
        {
            tmp[count][j] = s[i];
            j++;
            i++;
        }
        tmp[count][j] = '\0';
        if (tmp[count][0] == 'h' && tmp[count][j - 1] == 'g')
            count++;
    }
 
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
 
    printf("%d", count);
 
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

