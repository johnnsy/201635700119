#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	# define N 5
int main(int argc, char *argv[]) {
	int a[N];
	int i,temp;
	
	printf("请输入整数：\n");
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	
	printf("逆序前为：\n");
	for(i=0;i<N;i++)
	printf("%4d",a[i]);
	printf("\n");
	
	for(i=0;i<=N/2;i++)
	{temp=a[i];
	a[i]=a[N-i-1] ;
	a[N-i-1]=temp;
	}
	
	printf("逆序后结果为：\n");
	for(i=0;i<N;i++)
	printf("%4d",a[i]);
	
	
	return 0;
	
}
