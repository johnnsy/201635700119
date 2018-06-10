#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	printf("«Î ‰»Îxµƒ÷µ£∫");
	scanf("%d",&x);
	if(x<1)
	 y=x;
	else if(x<10)
	y=2*x-1;
	else
	y=3*x-11;
	printf("x=%d,y=%d",x,y);
	 
	return 0;
}
