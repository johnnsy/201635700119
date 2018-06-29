#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define  N  11

int main(int argc, char *argv[]) {
	
	int  a[N]= { 14,25,28,33,45,56,68,72,81,95 };
    int  i, x, p=0;
    printf("please input x:");   
	scanf("%d", &x);
	
    while( x>a[p] && p<=9 )
    p++;
    for( i=10;  i>p;  i-- )
    a[i]=a[i-1];
    a[p]=x;
    
    for( i=0;  i<N;  i++ )  printf("%d ", a[i] );
    printf("\n"); 

	return 0;
}
