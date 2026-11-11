#include <stdio.h>

int main() {
    int A[3], B[3], C[3];
    int i;
    
    for (i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
    }
    
    for (i = 0; i < 3; i++) {
        C[i] = A[i] + B[i];
    }
    
    for (i = 0; i < 3; i++) {
        printf(" | %d | \n", C[i]);
    }

    return 0;
}
