#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int s=0,i=1,m=2;
	
	scanf("%d",&n);
	while(i<=n)
	{s=s+m;
	m=m+2*pow(10,i);
	i++;
	}
	printf("sn=%d\n",s);
	return 0;
}
