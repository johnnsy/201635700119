#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define M 3
#define N 3
int main(int argc, char *argv[]) {
	int a[N][M],max,min,i,j,m,n;
    printf("请输入数组：\n");
    for(i = 0;i < N;i++)
    for(j = 0;j < M;j++)
    scanf("%d",&a[i][j]);
    
    for(i = 0;i < N;i++) 
    {for(j = 0;j < M;j++)
    printf("%5d",a[i][j]);
    printf("\n");}
    
    for(i = 0;i < N;i++) {
        max = a[i][0]; // max被赋予本行中的第一个值
        for(j = 0;j < M;j++) {
        if(max < a[i][j]) {
            max = a[i][j];
            m = j;}
        }
        min = a[0][m]; // min被赋予0行m列的值
        for(j = 0;j < N;j++) { // 不应该使用i作为循环变量
            if(min > a[j][m]) {
                min = a[j][m];
                n = j;
            }
        }
    }
     if(min == max) 
		printf("鞍点为：a[%d][%d] = %d\n",m,n,max);
		else
		printf("鞍点不存在");
	return 0;
}
