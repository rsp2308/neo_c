#include <stdio.h>

int main() {
    int age1, age2;
    printf("Enter the age of the first friend: ");
    scanf("%d", &age1);
    printf("Enter the age of the second friend: ");
    scanf("%d", &age2);

    int difference = (age1 > age2) ? (age1 - age2)
    : (age2 - age1);

    printf("%d", difference);
    return 0;
}