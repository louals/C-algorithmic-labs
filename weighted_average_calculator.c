#include <stdio.h>

int main() {
    float V[4], C[4];
    int i;
    float Dexter, Moy, Coef;
    
    Dexter = 0;
    Coef = 0;
    
    for (i = 0; i < 4; i++) {
        scanf("%f", &V[i]);
        scanf("%f", &C[i]);
    }
    
    for (i = 0; i < 4; i++) {
        Dexter = Dexter + (V[i] * C[i]);
        Coef = Coef + C[i];
    }

    Moy = Dexter / Coef;
    printf("%f", Moy);
    
    return 0;
}
