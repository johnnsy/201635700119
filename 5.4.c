#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int m=0,n=0,i=0,k=0;
	
	while((c=getchar())!='\n')
	{if(c>=65&&c<=90||c>=97&&c<=122) m++;
	else if(c>=48&&c<=57)n++;
	else if(c==32)i++;
	else k++;
	}
	printf("Ӣ����ĸ��Ϊ��%d,������Ϊ��%d,�ո���Ϊ��%d,�����ַ���Ϊ��%d",m,n,i,k);
	return 0;
}
