#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
	char c,c2;
	printf("½Ð¿é¤J¦r¥À¡G");
	scanf_s("%c",&c);
	if(c>=65 && c<=90)
	c2 = tolower(c);
	else
	c2 = toupper(c);
	printf("¤p¼g¡G%c",c2);
	system("pause");
	return 0;
}