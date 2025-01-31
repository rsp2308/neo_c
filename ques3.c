#include <stdio.h>

int main() {
    int n, lastDigit, secondLastDigit, sum;
    printf("Enter an integer: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    secondLastDigit = (n / 10) % 10;
    sum = lastDigit + secondLastDigit;

    printf("%d", sum);
    return 0;
}