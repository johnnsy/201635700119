#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define  pi  3.1415926
int main(int argc, char *argv[]) {
	
	float r;
	float s;
	printf("������Բ�뾶��");
	scanf("%f",&r);
	s=pi*r*r;
	printf("Բ����Ϊ��%f,�뾶Ϊ��%f",pi,r);
	printf("���Ϊ��%f",s); 
	return 0;
}
