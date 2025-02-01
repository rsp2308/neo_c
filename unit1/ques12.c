#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);

    int result = ++a * ++b / a;

    printf("%d", result);
    return 0;
}