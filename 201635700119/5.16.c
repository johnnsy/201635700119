#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=3,i,j;  
  
   for(i=-n;i<=n;i++)  
   {  
        for(j=1;j<=abs(i);j++)  printf(" ");  
        for(j=1;j<=2*n+1-2*abs(i);j++)    
        printf("*");  
        printf("\n");  
   }  
	
	return 0;
}
