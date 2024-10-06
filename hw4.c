#include <stdio.h>

int main(void)
{
	int num, i, primen;

	printf("Please enter a number: ");
	scanf("%d", &num);
	primen = 1;
	if (num <= 1) {
		primen=0;
	}
	else {
		for (i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				primen = 0;
				break;
			}
		}

		if (primen == 1) {
			printf("It is a prime nmber");
		}
		else {
			printf("It is not a prime nmber");
		}
	}


}