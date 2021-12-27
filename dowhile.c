#include <stdio.h>

int main()
{
    int a;
    int i = 1;
    printf("enter a number :\n");
    scanf("%d", &a);
    do
    {
        i=1+i;
        printf("%d\n", i);

    } while (i < a);
    return 0;
}