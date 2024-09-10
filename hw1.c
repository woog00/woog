#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int n1, n2, result;
	result = 0;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	printf("Input two integers: %d %d \n",n1,n2);
	result = n1 & n2;
	printf("%d & %d = %d \n", n1, n2, result);
	result = n1 | n2;
	printf("%d | %d = %d \n", n1, n2, result);
	result = n1 ^ n2;
	printf("%d ^ %d = %d \n", n1, n2, result);
	return 0;
}