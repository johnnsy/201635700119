#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 10 
void shift(p,x)  

float *p;int x;  

{float a[N],*q,*o;int i;  

o=a;q=p;  

for(i=0;i<x;i++)  

*(o+i)=*(q+N-x+i);  

for(p=p+N-1;p>=q;p--)  

*p=*(p-x);  

for(i=0;i<x;i++)  

*(q+i)=*(o+i);  

return;}  

int main(int argc, char *argv[]) 

{float shuzhu[N],*u,*v;  

int h,i;u=v=shuzhu;  

scanf("%f",&h);  

for(;u<v+N;u++)  

scanf("%f",u);  

shift(v,h);  

for(u=v;u<v+N;u++)  

printf("%.2f ",*u);  

printf("\n");  


	return 0;
}
