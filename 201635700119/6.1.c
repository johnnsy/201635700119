#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,h,k=0;
	int a[100]={0},p[100]={0};
	
	for(i=1;i<100;i++)
	a[i]=i+1;
	
	for(i=1;i<100;i++)
	if(a[i]!=0)
	{p[k]=a[i];
	for(h=k;h<100;h++)
	if(a[h]%p[k]==0)
	a[h]=0;
	k++;
	}
	i=0;
	printf("100以内的素数有：");
	while(p[i]!=0)
	{printf("%5d",p[i]);
	i++;}
	 

	return 0;
}
