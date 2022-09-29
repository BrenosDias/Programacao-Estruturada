#include <stdio.h>
   int menor( int a, int b);

int main()
{
   int i, j, n, a, b;
   do
   {
      scanf("%d", &n);

      for( i=0; i<n; i++)
      { 
            for (j=0; j<n; j++)
            {
               printf("%d   ", menor(menor(i + 1, j + 1), menor(n - i, n - j)));
            } 
            printf("\n");
      }
   } while(n!=0);
} 
   
int menor( int a, int b)
{
   if(a<b)
      return a;
   else
      return b;
}