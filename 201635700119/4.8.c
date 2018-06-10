#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float score;
	char grade;
	
	printf("请输入成绩：");
	scanf("%f",&score);
	
	while(score>100||score<0)
	{printf("\n输入错误！请重新输入：");
	 scanf("%f",&score); 
	 } 
	
	switch((int)(score/10))
	{case 10:
	 case 9:grade='A';break;
	 case 8:grade='B';break;
	 case 7:grade='C';break;
	 case 6:grade='D';break;
	 case 5:
	 case 4:
	 case 3:
	 case 2:
	 case 1:
	 case 0:grade='E';
	 } 
	 printf("成绩是%f,等级是%c\n",score,grade);
	return 0;
}
