#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j=0,k=0,l=0,m=0,n=0;
	char str0[301],str1[100],str2[100],str3[100];
	
	gets(str1);
	gets(str2);
	gets(str3);
	
	strcat(str0,str1);
    strcat(str0,str2);
    strcat(str0,str3);
    
    for(i=0;str0[i]!='\0';i++)
    {if(str0[i]>=65&&str0[i]<=90)  j++;
    else if(str0[i]>=97&&str0[i]<=122)  k++;
    else if(str0[i]>=48&&str0[i]<=57)  l++;
    else if(str0[i]==32)  m++;
    else n++;
	}
	printf("大写英文字母个数：%5d\n",j);
	printf("小写英文字母个数：%5d\n",k);
	printf("数字个数：%5d\n",l);
	printf("空格个数：%5d\n",m);
	printf("其他字符个数：%5d\n",n);
	
	return 0;
}
