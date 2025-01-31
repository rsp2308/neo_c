#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 100 && n % 7 != 0) {
        printf("Unlock Next Level");
    } else {
        printf("Level Locked");
    }

    return 0;
}