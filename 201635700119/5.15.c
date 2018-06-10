#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x1=-10,x2=10,y1,y2;
	do{y1=2*x1*x1*x1-4*x1*x1+3*x1-6;
	x1=x1-y1/(6*x1*x1-8*x1+3);
	} 
	while(y1!=0);
	
	do{y2=2*x2*x2*x2-4*x2*x2+3*x2-6;
	x2=x2-y2/(6*x2*x2-8*x2+3);
	} 
	while(y2!=0);
	printf("x1=%.3f,x2=%.3f\n",x1,x2);
	return 0;
}
