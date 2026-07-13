#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
      sum = sum + 1.0 / i;
    }
    printf("Sum = %.2f", sum);
    return 0;
}
