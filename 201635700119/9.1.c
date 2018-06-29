#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Date
	{   int year;
		int month;
		int day;
	};

int main(int argc, char *argv[]) {
struct Date p;
  scanf("%d,%d,%d",&p.year,&p.month,&p.day); 
  int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int sum,i;
            sum=p.day;
	        for(i=0;i<p.month-1;i++)
  	        sum+=a[i]; 
  if(((p.year%4==0&&p.year%100!=0)||p.year%400==0)&&p.month>2)
       printf("该日是在%d年中的第%d天", p.year,sum+1);   
  else 
   printf("该日是在%d年中的第%d天", p.year,sum); 
	
	
	return 0;
}
