#include <stdio.h>

int main() {
    int n[5];
    int i;

    printf("Please input five integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
    }

    printf("Odd numbers: ");
    for (i = 0; i < 5; i++) {
        if (n[i] % 2 != 0) {
            printf("%d ", n[i]);
        }
    }
    printf("\n");

    printf("Even numbers: ");
    for (i = 0; i < 5; i++) {
        if (n[i] % 2 == 0) {
            printf("%d ", n[i]);
        }
    }
    return 0;
}
