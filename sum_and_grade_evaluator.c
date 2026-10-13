#include <stdio.h>
#include <stdlib.h>

int main()
{
    float average;
    int a, b, s;

    printf("*********Welcome to my program********* \n");

    // Algorithm 1: Sum of two integers
    printf("The sum of two integers");
    printf("Enter the value of A: \n");
    scanf("%d", &a);
    printf("Enter the value of B: \n");
    scanf("%d", &b);
    s=a+b;
    printf("%d+%d=%d\n\n",a,b,s);
    
    // Algorithm 2: Grade level display
    printf("Grade evaluation\n");
    printf("Whats your average: \n");
    scanf("%f",&average);
    if(average>20 || average<0){
        printf("Error");
    }else if(average>=0 && average <10){
        printf("You fail");
    }else if(average>=10 && average <12){
        printf("You pass with passable");
    }else if(average>=12 && average <14){
        printf("You pass with good enough");
    }else if(average>=14 && average <16){
        printf("You pass with good");
    }else if(average>=16 && average <18){
        printf("You pass with very good ");
    }else{
        printf("You pass with very excellent ");
    }

    return 0;
}
