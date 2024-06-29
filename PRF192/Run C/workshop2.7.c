#include<stdio.h>
int main() {
	char x,y;
	int d,c;
	
	printf("First num, Second num: ");
	scanf("%c %c" ,&x,&y);
	if(x>y) {
		int t=x;
		x=y;
		y=t;
	}
	d=y-x;
	printf("D: %d\n\n",d);
	for(c=x;c<=y;c++) {
		printf("%c%d,%o,%X\n",c,c,c,c);
	};
	return (0);
}
