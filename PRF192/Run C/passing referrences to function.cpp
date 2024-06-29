#include <stdio.h>
void input(int* &ar, int&n)
{	printf("number of elements:");
	scanf("%d",&n);
	ar=new int[n];
	for (int i=0;i<n;i++)
	{	printf("element %d:",i);
		scanf("%d",&ar[i]);
	}
}
void output(int*ar,int n)
{	for(int i=0;i<n;i++) printf("%5d",ar[i]);

}
int main()
{	int* a=NULL, n;
	printf("enter an array of integers:\n");
	output(a,n);
	printf("values inputted:\n");
	output(a,n);
	delete a;
	getchar();
	getchar();	
}
