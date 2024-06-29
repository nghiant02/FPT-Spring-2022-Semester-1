#include <stdio.h>
int main ()
{	int mark;
	int reward;
	printf("your mark:");
	scanf("%d",&mark);
	reward = mark>8? 500000:0;
	printf("reward:%d\n",reward);
	getchar();getchar();
	return 0;
}
