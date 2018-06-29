#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[]={'*','*','*','*','*'};
	int i,j,k;
	char space=' ';
	
	for(i=0;i<5;i++)
	{  for(j=1;j<=i;j++)
	   printf("%c",space);
		for(k=0;k<5;k++)
		printf("%c",a[k]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
