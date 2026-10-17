#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b ;
    printf("Enter the value of A : \n");
    scanf("%d",&a);
    printf("Enter the value of B : \n");
    scanf("%d",&b);

    // Product sign logic
    if (a<0 && b<0 || a>0 && b>0){
        printf("Product sign is : + \n");
    }else if(a == 0 || b == 0){
        printf("Product is : 0 \n");
    }else{
        printf("Product sign is : - \n");
    }


    // Sum sign logic
    if(a < 0 && b < 0){
        printf("Sum sign is : - \n");
    }
    else if(a >= 0 && b >= 0 && (a != 0 || b != 0)){
        printf("Sum sign is : + \n");
    }
    else{
        if (a<0){
            if(-a>b) {
                printf("Sum sign is : - \n");
            }else if (-a<b){
                printf("Sum sign is : + \n");
            }else{
                printf("Sum is : 0 \n");
            }
        }else if(b<0){
            if(-b>a){
                printf("Sum sign is : - \n");
            }else if(-b<a) {
                printf("Sum sign is : + \n");
            }else{
                printf("Sum is : - \n");
            }
        }
    }
    return 0;
}
