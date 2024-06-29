#include<stdio.h>
#include<stdlib.h>
int main()
{	int x, count=0, countPos=0, countNeg=0;
	int sumPos=0, sumNeg=0, sum=0;
	double avg;
	printf("nhap cac so nguyen ket thuc bang 0\n");
	do
	{	scanf("%d",&x);
	if(x!=0)
		{	count++;
			sum+=x;
			if (x>0)
			{	countPos++;
				sumPos+=x;
			}
			else
			{	countNeg++;
				sumNeg+=x;
			}
		}	
	}
	while(x!=0);
	if (count==0) printf("khong co so nhap\n");
	else
	{	printf("so luong da nhap:%d\n",count);
		printf("so luong duong:%d\n",countPos);
		printf("so luong am:%d\n",countNeg);
		printf("tong cac so duong:%d\n",sumPos);
		printf("tong cac so am:%d\n",sumNeg);
		printf("tong cac so nhap:%d\n",sum);
		avg=(double)sum/count;
		printf ("trij trung binh:%lf\n",avg);
	}
	system("pause");
	return 0;
}
