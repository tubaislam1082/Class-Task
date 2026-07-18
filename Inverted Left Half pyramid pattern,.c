#include<stdio.h>

int main()
{
    int i,j,k,n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2 * (n- i) - 1; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
