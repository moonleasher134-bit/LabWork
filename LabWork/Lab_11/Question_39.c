#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while (num > 0) {
        int d = num % 10;
        if (d == 0) printf("1");
        else printf("0");
        num /= 10;
    }
    return 0;
}
