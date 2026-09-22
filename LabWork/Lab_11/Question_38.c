#include <stdio.h>

int main() {
    int num, prod = 1, found = 0;
    scanf("%d", &num);
    while (num > 0) {
        int d = num % 10;
        if (d % 2 == 1) {
            prod *= d;
            found = 1;
        }
        num /= 10;
    }
    if (found) printf("%d\n", prod);
    else printf("No odd digits\n");
    return 0;
}
