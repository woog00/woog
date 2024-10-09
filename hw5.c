#include <stdio.h>
int con(int num) {
	if (num > 1) {
		con(num / 2);
	}
	printf("%d", num % 2);
}
int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("Binary representation: ");
	con(num);

	return 0;


}