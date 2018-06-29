#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char str1[100],str2[100];
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	if(str1[i]>=65&&str1[i]<=90)
	str2[i]=155-str1[i];
	else if (str1[i]>=97&&str1[i]<=22)
	str2[i]=219-str1[1];
	else
	str2[i]=str1[i];
	printf("%s\n%s\n",str1,str2); 
	
	
	return 0;
}
