#include <stdio.h>

int main() {
    int firstTerm, commonDifference, numTerms;
    printf("Enter the first term: ");
    scanf("%d", &firstTerm);
    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    int sum = (numTerms * (2 * firstTerm + (numTerms - 1)
                          * commonDifference)) / 2;

    printf("%d", sum);
    return 0;
}