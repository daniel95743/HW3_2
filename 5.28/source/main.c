#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
	char c,c2;
	printf("�п�J�r���G");
	scanf_s("%c",&c);
	if(c>=65 && c<=90)
	c2 = tolower(c);
	else
	c2 = toupper(c);
	printf("�p�g�G%c",c2);
	system("pause");
	return 0;
}