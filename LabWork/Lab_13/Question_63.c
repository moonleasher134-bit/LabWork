#include <stdio.h>

int main() {
    int n, i, a[100], key;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    i = n - 1;
    while (i >= 0 && a[i] > key) { a[i + 1] = a[i]; i--; }
    a[i + 1] = key; n++;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
