#include <stdio.h>

int main() {
    float runningTime;
    printf("Enter Alex's running time in hours: ");
    scanf("%f", &runningTime);

    const char* result = (runningTime * 8 >= 20)
    ? "Alex can cover at least 20 miles." :
    "Alex cannot cover at least 20 miles.";
    printf("%s", result);

    return 0;
}