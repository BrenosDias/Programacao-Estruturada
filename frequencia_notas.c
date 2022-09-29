#include <stdio.h>

int main()
{
   int vetor[100];
   int c, freq[11] = {0}, x;

   scanf("%d", vetor);

   for(c = 0; vetor[c] != '\0'; c++)
   {
   
      if(vetor[c] <= 10)
      {
        x = vetor[c];
        freq[x]++;
      }
   }

   for(c = 0; c < 11; c++)
   {
        printf("%d ", freq[c]);
   }
   
   return 0;
}