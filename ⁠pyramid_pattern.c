#include <stdio.h>
#include <unistd.h>

int main() {
    int i, k, l, s, e, x;
    printf("Give me a number: \n");
    scanf("%d", &x);
    e = 1;
    s = 1;
    for (i = 1; i <= x; i++) {
        for (k = 1; k <= x - s; k++) {
            printf(" ");
        }
        for (l = 1; l <= e; l++) {
            printf("*");
        }
        printf("\n");
        s++;
        e = e + 2;
    }
    return 0;
}
