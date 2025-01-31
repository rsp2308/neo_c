#include <stdio.h>

int main() {
    int johnSalary, johnExpenditure, ramSalary, ramExpenditure,
      josephSalary, josephExpenditure;
    int johnRemaining, ramRemaining, josephRemaining;

    // Input for John's salary and expenditure
    scanf("%d %d", &johnSalary, &johnExpenditure);
    johnRemaining = johnSalary;
    johnRemaining -= johnExpenditure;

    // Input for Ram's salary and expenditure
    scanf("%d %d", &ramSalary, &ramExpenditure);
    ramRemaining = ramSalary;
    ramRemaining -= ramExpenditure;

    // Input for Joseph's salary and expenditure
    scanf("%d %d", &josephSalary, &josephExpenditure);
    josephRemaining = josephSalary;
    josephRemaining -= josephExpenditure;

    // Determine who has the most remaining money
    if (johnRemaining >= ramRemaining && johnRemaining
                                     >= josephRemaining) {
        printf("John has more money");
    } else if (ramRemaining >= johnRemaining &&
               ramRemaining >= josephRemaining) {
        printf("Ram has more money");
    } else {
        printf("Joseph has more money");
    }

    return 0;
}