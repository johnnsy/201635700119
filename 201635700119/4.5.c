#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define M 1000 
int main(int argc, char *argv[]) {
	int i;
	int k;
	printf("������һ��С��%d����",M);
	scanf("%d",&i);
	while(i>M)
	{printf("�����������������һ��С��%d����",M);
	scanf("%d",&i);	
	}
	k=sqrt(i);
	printf("ƽ��������������Ϊ��%d",k);
	return 0;
}
