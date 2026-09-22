#include <stdio.h>

int main() {
    int num, count[10] = {0}, d, max = 0, digit = 0;
    scanf("%d", &num);
    while (num > 0) {
        d = num % 10;
        count[d]++;
        num /= 10;
    }
    for (d = 0; d < 10; d++) if (count[d] > max) { max = count[d]; digit = d; }
    printf("%d\n", digit);
    return 0;
}
