#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char * p,str[50];
    int upper=0, lower=0,digit=0,space=0,other=0;
    p=str;
    printf("ÇëÊäÈëÒ»ÐÐ×Ö·û.\n");
    gets(str);
    while((*p) != '\0'){
        if(*p>='A' && *p<='Z') ++upper;
        else if(*p>='a' && *p<='z') ++lower;
        else if(*p>='0' && *p<='9') ++digit;
        else if(*p==' ') ++space;
                else ++other;
        p++;
    }
    printf("the number of upper is %d\n",upper);
    printf("the number of lower is %d\n",lower);
    printf("the number of digit is %d\n",digit);
    printf("the number of space is %d\n",space);
    printf("the number of other is %d\n",other);
	
	return 0;
}
