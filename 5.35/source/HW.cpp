#include<stdio.h>
#include<stdlib.h>

unsigned long long int  fibonacci( unsigned int n1);

int main(void)
{
	int i,n2;
	printf("��Jn���O�i�ǫ��ƦC�G");
	scanf_s("%d",&n2);
	for (i = 0; i < n2; i++)
	{
	printf("%llu\t",fibonacci(i));
	}
	system("pause");
	return 0;
}
unsigned long long int  fibonacci(unsigned int n1)
{
	int i;
	unsigned long long int a=0,b=1,ans=0;
	for (i = 0; i <n1; i++)
	{
		if (i == 0)
			ans = 0;
		if (i == 1)
			ans = 1;
		else
		ans = a + b;
		a = b;
		b= ans;
	
	}
	return ans;
}