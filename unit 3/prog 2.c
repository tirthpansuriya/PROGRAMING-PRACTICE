#include <stdio.h>
#define PI 3.14

void area(float *r, float *result) {
    *result = PI * (*r) * (*r);
}

int main() {
    float radius, result;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area(&radius, &result);

    printf("Area of circle = %.2f\n", result);
    return 0;
}
