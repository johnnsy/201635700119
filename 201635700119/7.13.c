#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float p(x0,n)  
    int n;float x0;  
{   float y;  
    if(n==0||n==1) if(n==1) y=x0;else y=1;  
    else y=((2*n-1)*x0*p(x0,n-1)-(n-1)*p(x0,n-2))/n;  
    return(y);  }  

{   float x,y0;int a,i;  
    scanf("%f,%d",&x,&a);  
    y0=p(x,a);  
    printf("y0=%.3f\n",y0);  
}  
	return 0;
}
