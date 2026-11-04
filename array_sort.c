#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Dex[10], Rita[10];
    int j,i,N , tmp ;

    for (i=0 ; i<10; i++)
    {
        scanf("%d", &N);
        Dex[i] = N;
    }
    for (i=0 ; i<10; i++) {
        for (j=i+1;j<10;j++) {
            if (Dex[i]>Dex[j]) {
                tmp = Dex[i];
                Dex[i]= Dex[j];
                Dex[j]=tmp;
            }
        }
    }
    for (i=0 ; i<10; i++)
    {
        printf("%d", Dex[i]);
    }

    return 0;
}
