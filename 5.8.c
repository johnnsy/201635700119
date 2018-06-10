#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	int x;
	
	for(x=100;x<1000;x++)
	{a=x/100;
	b=(x-100*a)/10;
	c=x-100*a-10*b;
	if(x==pow(a,3)+pow(b,3)+pow(c,3))
    printf("%5d\n",x);
		}
	return 0;
}
