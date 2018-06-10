#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,i,s,j;
	
	for(x=6;x<1000;x++)
	{s=1;
	for(i=2;i<x;i++)
	if(x%i==0)
	s=s+i;
	if(x-s==0)
	{printf("%5d its factors are ",x);
	for(j=1;j<x;j++)
	if(x%j==0)
	printf("%5d",j);
	printf("\n");}
	 } 
	
	return 0;
}
