
#include<stdio.h>
#define MAXR 20
#define MAXC 20

void input(int m[][MAXC],int r,int c);
int max(int m[][MAXC],int r,int c);
void print(int m[][MAXC],int r,int c);
int main()
{
	int m[MAXR][MAXC];
	int r,c;
	int MaxVal;
	do
	{
		printf("Enter number of rows and columns of the matrix:");
		scanf("d%d",&r,&c);
	}
	while (r<1 || r>MAXR || c<1 || c>MAXC);
	printf("Enter a matrix %d x %d\n",r,c);
	input(m,r,c);
	MaxVal=max(m,r,c);
	printf("Max value:%d\n",MaxVal);
	printf("\nInputted matrix:\n");
	while (getchar()!='\n');getchar();
	return 0;
}
void input(int m[][MAXC],int r,int c)
{	int i,j;
	for(i=0;i<c;i++)
	{for (j=0;i<r;j++)
		{printf("Value at[%d][%d]:",i,j);
		scanf("%d",&m[i][j]);
		}
	}
}
int max(int m[][MAXC],int r,int c)
{	int result =m[0][0];
	int i,j;
	for (i=0;i<r;i++)
	for(j=0;j<c;j++)
	if(result<m[i][j])result=m[i][j];
	return result;
}
void print(int m[][MAXC],int r,int c)
{	int i,j;
	for(i=0;i<r;i++)
	{for(j=0;j<c;j++) printf("%7d",m[i][j]);
	printf("\n");
	}
}


