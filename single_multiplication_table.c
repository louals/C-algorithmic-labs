#include <stdio.h>
#include <unistd.h>

int main() {
    int x, i;

    printf("Multiplication Table \n");
    printf("Give me a number: \n");
    scanf("%d", &x);
    for (i = 1; i <= 10; i++) {
        printf("|%d x %d = %d\n", x, i, i * x);
    }
    return 0;
}
