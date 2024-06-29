/*Enter the number of rows5
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    
	int i,j,rows,space=0;
  	printf("Enter the number of rows");
	scanf("%d",&rows);//taking numer of rows from user
    
	for(i=rows; i>=1; i--){
            //outer for loop
        for(j=1; j<=space; j++)
        	printf("  ");
         	for(j=1; j<=i; j++)
        		printf("%d ",j);
        		
         		for(j=i-1; j>=1; j--)
        			printf("%d ",j);
	printf("\n");
    space++;
    }
    getch();
    return 0;
}

