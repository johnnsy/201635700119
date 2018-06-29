#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 3  
#define M 20  

int main(int argc, char *argv[]) {
   char str0[N][M],str1[M],*p,*q;  
   int i,l,m,n;  
    q=str0;  

for(;p<q+N;p++)  
  gets(p);  
  l=strcmp(q,q+1);  
if(l>0)  
  {strcpy(str1,q);strcpy(q,q+1);strcpy(q+1,str1);}  
    m=strcmp(q,q+2);  
if(m>0)   
  {strcpy(str1,q);strcpy(q,q+2);strcpy(q+2,str1);}  
    n=strcmp(q+1,q+2);  
if(n>0)  
  {strcpy(str1,q);strcpy(q+1,q+2);strcpy(q+2,q+1);}  
 for(p=q;p<q+N;p++)  
     puts(p); 

	return 0;
}
