#include<stdio.h>
#include<stdlib.h>

void hanoi(int, char, char, char);

int time = 0;

int main(void)
{
	int n;

	printf("請輸入有幾個塔：");
	scanf_s("%d", &n);

	hanoi(n, 'A', 'B', 'C');

	printf("移動 %d 層河內塔共需移動 %d 次\n", n, time);

	system("pause");
}

void hanoi(int n, char X, char Y, char Z)
{
	if (n == 1)
	{
		printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, X, Z);
	}
	else
	{
		hanoi(n - 1, X, Z, Y);
		printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, X, Z);
		hanoi(n - 1, Y, X, Z);
	}
}