#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define M 1000 
int main(int argc, char *argv[]) {
	int i;
	int k;
	printf("请输入一个小于%d的数",M);
	scanf("%d",&i);
	while(i>M)
	{printf("输入错误！请重新输入一个小于%d的数",M);
	scanf("%d",&i);	
	}
	k=sqrt(i);
	printf("平方根的整数部分为：%d",k);
	return 0;
}
