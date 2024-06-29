#include<stdio.h>
int main()
{
	int r=3, c=4, m1[r][c],i,j;
	double**m2;
	m2=(double**)calloc(r,sizeof(double*));
	m2[0]=(double*)calloc(4,sizeof(double));
	m2[1]=(double*)calloc(4,sizeof(double));
	int*p=(int*)malloc(sizeof(int));
	m2[2]=(double*)calloc(4,sizeof(double));
	printf("\nMemory of m1:\n");
	printf("m1:addr:%u,value:%u\n",&m1,m1);
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		printf("%u",&m1[i][j]);
		printf("\n");
		}
		printf("\np:addr:%u,value:%u\n",&p,p);
		printf("\n Memory of m2:\n");
		printf("m2:addr:=%u,value:%u\n",&m2,m2);
		for(i=0;i<r;i++)
		{for(j=0;j<c;j++)
		printf("%u",&m2[i][j]);
		printf("\n");
		}
		getchar();
		return 0;		
}
