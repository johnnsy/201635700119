#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define  pi  3.1415926
int main(int argc, char *argv[]) {
	
	float r;
	float s;
	printf("请输入圆半径：");
	scanf("%f",&r);
	s=pi*r*r;
	printf("圆周率为：%f,半径为：%f",pi,r);
	printf("面积为：%f",s); 
	return 0;
}
