#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[100],s2[100];
	printf("������s1��");
	gets(s1);
	printf("������s2��");
	gets(s2);
	int i,num=0;
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{   printf("s1[%d]=%d\n",i,s1[i]);
		printf("s2[%d]=%d\n",i,s2[i]);
		num=num+s1[i]-s2[i];
		printf("\n");
	}
	printf("����ǣ�%d\n\n",num);

	
	return 0;
}
