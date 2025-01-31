#include <stdio.h>

int main() {
    int income;
    double tax;
    printf("Enter your income: ");
    scanf("%d", &income);

    tax = (income <= 250000) ? 0.00 :
          (income <= 500000) ? income * 0.05 :
          (income <= 1000000) ? income * 0.10 :
                                income * 0.20;

    printf("%.2f", tax);
    return 0;
}