#include <stdio.h>

int main() {
    int n, sum = 0, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        sum += i;
        i += 2;
    } while (i <= n);

    printf("%d", sum);
    return 0;
}