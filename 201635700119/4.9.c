#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,n;
	int s1,s2,s3,s4,s5;
	printf("请输入一个小于10000的整数：");
	scanf("%d",&num);
	while(num>10000)
	{printf("输入错误！请重新输入：");
	 scanf("%d",&num);
	}
	if (num>9999)
	  n=5;
	else if(num>999)
	 n=4;
	else if(num>99)
	 n=3;
	else if(num>9)
	 n=2;
	else n=1;
	printf("该数字位数为：%d\n",n);
	
	s1=num/10000;
	s2=(num-s1*10000) /1000;
	s3=(num-s1*10000-s2*1000)/100;
	s4=(num-s1*10000-s2*1000-s3*100)/10;
	s5=(num-s1*10000-s2*1000-s3*100-s4*10);
	
	switch(n)
	{case 5:printf("每位数字为：%d,%d,%d,%d,%d\n",s1,s2,s3,s4,s5);
	        printf("逆序数字为：%d,%d,%d,%d,%d\n",s5,s4,s3,s2,s1);
	        break;
	 case 4:printf("每位数字为：%d,%d,%d,%d\n",s2,s3,s4,s5);
	        printf("逆序数字为：%d,%d,%d,%d\n",s5,s4,s3,s2);
	        break;
	case 3:printf("每位数字为：%d,%d,%d,\n",s3,s4,s5);
	        printf("逆序数字为：%d,%d,%d\n",s5,s4,s3);
	        break;
	 case 2:printf("每位数字为：%d,%d\n",s4,s5);
	        printf("逆序数字为：%d,%d\n",s5,s4);
	        break;
	  case 1:printf("每位数字为：%d\n",s5);
	        printf("逆序数字为：%d\n",s5);
	        break;
	        
	
	}
	 
	 
	
	return 0;
}
