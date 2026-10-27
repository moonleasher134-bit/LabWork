#include <stdio.h>

int main() {
    char str[100], rev[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        length--;
    }

    for (i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }

    rev[i] = '\0';

    printf("Reversed String: %s\n", rev);

    return 0;
}