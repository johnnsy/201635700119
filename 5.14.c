#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x=1.5,y;
	do{y=2*x*x*x-4*x*x+3*x-6;
	x=x-y/(6*x*x-8*x+3);
	} 
	while(y!=0);
	printf("x=%.3f\n",x);
	return 0;
}
