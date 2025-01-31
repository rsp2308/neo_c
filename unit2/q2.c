#include <stdio.h>

int main() {
    int roadType, speed;
    printf("Enter the road type (1 for Residential, 2 for City, 3 for Highway): ");
    scanf("%d", &roadType);
    printf("Enter the current speed: ");
    scanf("%d", &speed);

    printf("%s", (speed < (roadType == 1 ? 25 : roadType == 2 ? 35 : 55)) ? "Below" : (speed == (roadType == 1 ? 25 : roadType == 2 ? 35 : 55)) ? "Normal" : "Above");
    return 0;
}