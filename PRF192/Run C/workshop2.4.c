#include <stdio.h>
int main(){
	int t,x,y;
	do{
		printf ("enter x: ");
		scanf ("%d",&x);
		printf ("enter y: ");
		scanf ("%d",&y);
		
		t=x;
		x=y;
		y=t;
		
		printf("x= %d\n" ,x);
		printf("y= %d" ,y);
		break;	
	}while(x!=0 && y!=0);
	
	return(0);
}
