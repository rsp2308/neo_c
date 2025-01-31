#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);

    int result = (++n) * (--m);

    printf("%d", result);
    return 0;
}