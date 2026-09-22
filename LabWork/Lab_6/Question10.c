#include <stdio.h>

int main() {
    int seconds, h, m, s;
    scanf("%d", &seconds);

    h = seconds / 3600;
    m = (seconds % 3600) / 60;
    s = seconds % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
