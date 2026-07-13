#include <stdio.h>

int main()
{
    int i, n,fact = 1;
    float sum = 0;
    printf("Enter n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;    
        sum = sum + 1.0 / fact;
    }

    printf("Sum = %f", sum);

    return 0;
}
