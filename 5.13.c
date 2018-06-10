#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x0,x1,a;
	scanf("%f",&a);
	x1=a/2;
	do
	{x0=x1;x1=(x0+a/x0)/2;
	}
	while(fabs(x0-x1)>=0.00001);
	printf("%.3f\n",x1);
	return 0;
	
}
