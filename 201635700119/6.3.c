#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int a[3][3];
	int s1=0,s2=0;
	printf("������3x3����Ԫ��\n");
	for (i=0;i<3;i++)
	for (j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	
	for (i=0;i<3;i++)
    {
	  s1=s1+a[i][i];
	  s2=s2+a[i][3-i-1];}
	printf("���Խ���֮��Ϊ%d\n",s1);
	printf("���Խ���֮��Ϊ%d\n",s2);
	
	
	
	return 0;
}
