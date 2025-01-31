#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 || n % 2 == 0) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}