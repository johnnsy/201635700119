#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 15
int main(int argc, char *argv[]) {
	int a[N]={99,85,76,62,57,53,46,44,32,28,24,15,12,9,1}; 
	int begin=0,end=14,midlle,x; 
	
	printf("请输入查找的数："); 
	scanf("%d",&x); 
	if(x<a[N-1]||x>a[0])
	printf("无此数"); 
	
	while(begin<=end)	
   { midlle=(begin+end)/2;
   printf("%d",midlle);
    if(x==a[midlle])
	printf("这个数是数组中第%d个元素的值",midlle+1);
    else if(x<a[midlle])
    end=midlle-1;
    else
    begin=midlle+1;}
	return 0;
}
