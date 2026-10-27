#include <stdio.h>

int main() {
    int n, i, j, a[10][10], distinct = 1;
    int seen[1000] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++) {
        if (seen[a[i][i]]) distinct = 0;
        seen[a[i][i]] = 1;
    }
    if (distinct) printf("Distinct\n");
    else printf("Not Distinct\n");
    return 0;
}
