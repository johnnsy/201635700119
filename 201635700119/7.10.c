#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
cechang(str1,word0)  

char str1[100],word0[15];  

{int i=0,j=0,t=0;  

static char word1[15];  

for(;str1[i]!='\0';i++)  

{if(!(str1[i]>=97&&str1[i]<=122||str1[i]>=65&&str1[i]<=90))  

{t=j;j=0;continue;}  

word1[j]=str1[i];j++;  

if(j>=t) strcpy(word0,word1);}  

}  

main()  

{char str0[100],longword[15];  

gets(str0);  

cechang(str0,longword);  

puts(longword);  

}  

