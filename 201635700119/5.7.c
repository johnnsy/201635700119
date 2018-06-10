#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float s=0;
	int k;

	for(k=1;k<=100;k++)
	{
	 s=s+k;
	}
	
	for(k=1;k<=50;k++)
	{s=s+k*k;
	}
	
	for(k=1;k<=10;k++)
	{
	 s=s+1/k;
	}
	
	printf("原式和为:%f",s);
	
	return 0;}
