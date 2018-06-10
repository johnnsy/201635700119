#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	double h=100,s=100;

    for(i=1;i<=10;i++)
   { h=0.5*h;
    s=s+2*h;
	} 
	printf("第10次反弹%f米，第10次落地时共经过%f米",h,s);
	return 0;
}
