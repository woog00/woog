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

    printf("5개의 실수를 입력하세요 ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &number[i]); 
    }

    double std = cal(number);

    printf("표준편차 = %f\n", std);
    return 0;
}
