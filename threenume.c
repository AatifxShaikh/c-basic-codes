#include<stdio.h>

int main()
{
int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){

    
      if(c>a)
          printf("%d is the largest number",c);
      else 
          printf("%d is the largest number",a);
    }
    else{
        if(b>c)
        printf("%d is the largest number",b);
        else
        printf("%d the laregest number is",c);

    }

    return 0;
}