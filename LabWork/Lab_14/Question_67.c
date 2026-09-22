#include <stdio.h>

int main() {
    int n, k, i, a[100];
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    k %= n;
    for (i = 0; i < n; i++)
        printf("%d ", a[(n - k + i) % n]);
    return 0;
}
