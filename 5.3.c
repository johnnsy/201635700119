#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long m,n,j,s;
	long i=1;
	
	printf("����������������:");
	scanf("%d,%d",&m,&n);
	
	for(;i<=m&&i<=n;i++)
	{if(m%i==0&&n%i==0)s=i;
	 } 
	if(m>=n) j=m;
	else j=n;
	for(;!(j%m==0&&j%n==0);j++);
	
	printf("\n���Լ��=%d,��С������=%d",s,j);
	
	
	
	return 0;
}
