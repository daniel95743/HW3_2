#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int function(int i, int j);

int main(void)
{
	int a, b,ans;
	printf("�п�J�Ʀr�M����G");
	scanf_s("%d%d", &a, &b);
	while (a == 0 || b == 0)
	{
		printf("�п�J�Ʀr�M����G");
		scanf_s("%d%d", &a, &b);
	}
	printf("=%d\n",function(a,b));
	system("pause");
	return 0;
}
int function(int i, int j)
{
	int y;
	y=i*pow(i,j-1);
	return y;
	if (j == 1)
		return i;
}