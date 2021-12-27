#include<stdio.h>

int main(){
    int num ,i;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++){
        if(num%i==0)
        {
         printf("it is not a prime number");
         break;
        
        }
    }
    if(num==i)
    printf("prime number");
    return 0;
}