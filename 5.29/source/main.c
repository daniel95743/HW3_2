#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int a, b,i,j,lcm;
	printf("Please input two number¡G");
	scanf_s("%d%d",&a,&b);
	if (a > b)
		j = a;
	if (a < b)
		j = b;
	for (i = j; i > 0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			break;
		}
	}
	lcm = (a * b )/ i;
	printf("lcm %d\n", lcm);
	system("pause");
	return 0;
}