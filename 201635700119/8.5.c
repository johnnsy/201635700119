#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 5  
int main(int argc, char *argv[]) {
	int i,j,k,a[N+1],*p;  

for(i=0,p=a;p<=a+N;i++,p++)   

*p=i;  

p=a+1;k=N;  

for(i=0,j=1;k!=1;j++)  

{if(p>(a+N))  

 p=a+1;  

if(*p!=0)  

 i++;  

if((i-3)==0)   

{*p=0;i=0;k--;}  

p++;  

}  

for(i=1;i<=N;i++)  

if(a[i]!=0)   

printf("The last number is %d\n",a[i]);

	return 0;
}
