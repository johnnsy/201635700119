#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 10  
int main(int argc, char *argv[]) {
	char a[N+1],b[N+1],*p,*q;  
    int m;  

gets(a);  

scanf("%d",&m);  

p=a+m;q=b;  

strcpy(q,p);  

puts(q);  

	
	return 0;
}
