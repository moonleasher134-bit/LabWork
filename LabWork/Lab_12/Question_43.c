#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += (2 * i) / (double)(4 * i - 1);
    printf("%.2f\n", sum);
    return 0;
}
