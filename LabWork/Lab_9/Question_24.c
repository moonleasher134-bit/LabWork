#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': 
            if (b != 0) printf("%d\n", a / b);
            else printf("Division by zero error\n");
            break;
        case '%': 
            if (b != 0) printf("%d\n", a % b);
            else printf("Modulo by zero error\n");
            break;
        default: printf("Invalid Operator\n");
    }

    return 0;
}
