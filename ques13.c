#include <stdio.h>

int main() {
    double w, tax;
    printf("Enter the volume of water consumed: ");
    scanf("%lf", &w);

    tax = (w < 100) ? w * 1.0 :
          (w <= 500) ? w * 1.5 :
                       w * 3.0;

    printf("%.2f", tax);
    return 0;
}