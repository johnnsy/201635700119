#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int s=0;
	int t=1;
	int n;
	
	for(n=1;n<=20;n++)
	{ t=t*n;
	  s=s+t;
	}
	printf("1!+2!+...+20!=%d",s);
	
	return 0;
}
