#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1,x=1,y=2;
	double s=0,n,t;
 while(i<=20)
  {n=y/x;
   s=s+n;
   t=y;
   y=y+x;
   x=t;
   i++;
  }
  printf("%f",s);
	return 0;
}
