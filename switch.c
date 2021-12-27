#include<stdio.h>

int main(){
    int a;
    printf("enter your age:");
    scanf("%d",&a);
    switch (a)
    {
    case 5:
        printf("your age is 5.");
        break;

    case 10:
    printf("your age is 10.");

    
    default :
            printf("your age is neither 10 nor 5");
        break;
    }
    
    return 0;
}