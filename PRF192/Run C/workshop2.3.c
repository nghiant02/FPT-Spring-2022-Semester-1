#include <stdio.h>
int main() {
 int n,s=0;
    do{
    printf ("enter n: ");
    scanf ("%d",&n);
    s = s + n;
	}while(n!=0);
	printf ("Sum = %d",s);
	return (0);
}
