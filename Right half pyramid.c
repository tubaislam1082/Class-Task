#include<stdio.h>
int main()
{
 int i,n;
 scanf("%d",&n);
 for(i=0;i<=n;i++)
   {
   for(int j=0;j<=i;j++)
     {
         printf("%c ", 'A'+j);
     }
     printf("\n");
   }

}
