#include <stdio.h>

int main() {
    int server1, server2;
    printf("");
    scanf("%d", &server1);
    printf("");
    scanf("%d", &server2);

    const char *status = (server1 == 1 || server2 == 1)?
        "The network is stable." : "The network is unstable.";
    printf("%s", status);

    return 0;
}
