#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float i;
	float x,x1,x2,x4,x6,x10;
	printf("请输入当月利润i:");
	scanf("%f",&i);
	
	x1=100000*0.1;
	x2=x1+100000*0.075;
	x4=x2+100000*0.05;
	x6=x4+100000*0.03;
	x10=x6+400000*0.015;
	
	if(i<=100000)
	x=i*0.1;
	else if(i<=200000)
	x=x1+0.075*(i-100000);
	else if(i<=400000)
	x=x2+0.05*(i-200000);
	else if(i<=600000)
	x=x4+0.03*(i-400000);
	else if(i<=1000000)
	x=x6+0.015*(i-600000);
	else 
	x=x10+0.01*(i-1000000);
	
	printf("奖金总数为：%f\n",x);
	return 0;
}
