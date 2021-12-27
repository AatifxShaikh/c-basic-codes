#include<stdio.h>

int main(){
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        printf("i = %d\n",i);
        if(n%i==0){
           // printf("i = %d\n",i);

        
        printf("it is not a prime number");
        break;
        }
    }
    if (i==n){
       
        printf("prime");
    }
    return 0;
}