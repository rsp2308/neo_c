#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int xorResult = a ^ b;
    int result = (xorResult && !(xorResult & (xorResult - 1))) ? 1 : 0;

    printf("Result: %d", result);
    return 0;
}