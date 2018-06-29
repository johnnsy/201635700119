#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,t;
	int a[10];
	
	for (i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(j=1;j<10;j++)
	for(i=0;i<9-j;j++)
	if (a[i]>a[i+1])
	{
	 t=a[i+1];
	 a[i+1]=a[i];
	 a[i]=t;    };
	for (i=0;i<10;i++)
	printf("%5d",a[i]);
	
	
	return 0;
}
