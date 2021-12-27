#include <stdio.h>

int main()
{
    int i, n;
    printf("prime numbers betwen 1 to 50 are:\n");
    for (n = 1; n <= 50; n++)
    {

        for (i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
                break;
        }
        if (n == i)
            printf("%d\n", n);
    }
    return 0;
}