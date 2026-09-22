#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits;
    scanf("%d", &num);
    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);
    int middle = num % (int)pow(10, digits);
    middle /= 10;
    int swapped = last * (int)pow(10, digits) + middle * 10 + first;
    printf("%d\n", swapped);
    return 0;
}
