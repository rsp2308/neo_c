#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of successful attempts: ");
    scanf("%d", &n);
    printf("Enter the number of unsuccessful attempts: ");
    scanf("%d", &m);

    int score = 100 + (n * 20) - (m * 10);

    if (score < 50) {
        printf("The player is disqualified.");
    } else {
        printf("The player's final score is %d.", score);
    }

    return 0;
}