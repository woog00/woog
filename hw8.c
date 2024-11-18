#include <stdio.h>
#include <math.h> 

double cal(double arr[]) {
    double mean = 0, route = 0;

    for (int i = 0; i < 5; i++) {
        mean += arr[i];
    }
    mean /= 5;

    for (int i = 0; i < 5; i++) {
        route += pow(arr[i] - mean, 2);
    }
    route /= 5;

    route = sqrt(route);

    return route;
}

int main() {
    double number[5];

    printf("5���� �Ǽ��� �Է��ϼ��� ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &number[i]); 
    }

    double std = cal(number);

    printf("ǥ������ = %f\n", std);
    return 0;
}
