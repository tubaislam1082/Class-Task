#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0.0;
    int fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;      // i! বের করা
        sum = sum + 1.0 / fact;
    }

    printf("Sum = %f", sum);

    return 0;
}
