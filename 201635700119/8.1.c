#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a,b,c,*p1,*p2,*p3,t;  

    scanf("%d,%d,%d",&a,&b,&c);  

   p1=&a;p2=&b;p3=&c;  
  if(*p1>*p2)   
{t=p1;p1=p2;p2=t;}  
  if(*p1>*p3)  
{t=p1;p1=p3;p3=t;}  
  if(*p2>*p3)   
{t=p2;p2=p3;p3=t;}  

printf("%d,%d,%d\n",*p1,*p2,*p3);  

	return 0;
}
