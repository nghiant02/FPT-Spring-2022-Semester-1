/* varibles demo - operator & address of */
#include <stdio.h>
#include <conio.h>
int main() {
	char c='A'; int i=1; long l=1000; 
	float f=0.5f; double d=12.809;
	printf("variable c: at addr: %c, size: %d\n", &c, c, sizeof(c));
	printf("variable i: at addr: %c, size: %d\n", &c, i, sizeof(i));
	printf("variable l: at addr: %c, size: %d\n", &c, l, sizeof(l));
	printf("variable f: at addr: %c, size: %d\n", &c, f, sizeof(f));
	printf("variable d: at addr: %c, size: %d\n", &c, d, sizeof(d));
	getch();
}
