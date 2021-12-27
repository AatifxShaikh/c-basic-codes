#include<stdio.h>

int main(){
    int n,i;
    int r;
    int flag=0;
    printf("enter any number:");
    scanf("%d,&n");
    for(i=2;i<n;i++)
    {
        r=n%i;
        if(r==0)
        printf("num is not a prime number");
        flag==1;
        break;
    }    
    if(flag==0);
    {
        printf("it is a prime number");
    
    }

    return 0;
}
