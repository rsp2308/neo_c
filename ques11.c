#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    const char* result = (n > 0) ? "The number is positive" :
                        (n < 0) ? "The number is negative" :
                                  "The number is zero";

    printf("%s", result);
    return 0;
}