#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define M 3
#define N 3
int main(int argc, char *argv[]) {
	int a[N][M],max,min,i,j,m,n;
    printf("���������飺\n");
    for(i = 0;i < N;i++)
    for(j = 0;j < M;j++)
    scanf("%d",&a[i][j]);
    
    for(i = 0;i < N;i++) 
    {for(j = 0;j < M;j++)
    printf("%5d",a[i][j]);
    printf("\n");}
    
    for(i = 0;i < N;i++) {
        max = a[i][0]; // max�����豾���еĵ�һ��ֵ
        for(j = 0;j < M;j++) {
        if(max < a[i][j]) {
            max = a[i][j];
            m = j;}
        }
        min = a[0][m]; // min������0��m�е�ֵ
        for(j = 0;j < N;j++) { // ��Ӧ��ʹ��i��Ϊѭ������
            if(min > a[j][m]) {
                min = a[j][m];
                n = j;
            }
        }
    }
     if(min == max) 
		printf("����Ϊ��a[%d][%d] = %d\n",m,n,max);
		else
		printf("���㲻����");
	return 0;
}
