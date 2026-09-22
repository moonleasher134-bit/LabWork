#include <stdio.h>
int main(){
    double pi = 3.1415926536;
    float radius;
    double area = pi * (radius * radius);
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("%lf", area);
    return 0;
}