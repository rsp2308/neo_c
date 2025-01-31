#include <stdio.h>
int main(){
    int marks[5], total = 0;
    float percentage;
    printf("Enter the marks for five subjects: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500.0) * 100;
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}