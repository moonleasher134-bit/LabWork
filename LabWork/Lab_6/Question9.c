#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple, compound;
    scanf("%f %f %f", &principal, &rate, &time);

    simple = (principal * rate * time) / 100;
    compound = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simple);
    printf("Compound Interest = %.2f\n", compound);
    return 0;
}
