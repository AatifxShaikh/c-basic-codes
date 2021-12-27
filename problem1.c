#include <stdio.h>

int main()
{
    int n=1;
    printf("prime number between 1 to 300:");
    
    for (int n = 1; n <= 300; n++)
    {
        int i = 2;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (n == i)
            printf("%d\t", n);
    }
    return 0;
}