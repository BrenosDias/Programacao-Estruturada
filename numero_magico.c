#include <stdio.h>

int fat(int);
float expo(float, int);
float magico(float, int);

int main()
{
   int repeticoes;
   float numero;

   scanf("%f", &numero);
   scanf("%d", &repeticoes);

   printf("%f\n", magico(numero, repeticoes));
}


int fat(int n) {

   if(n == 1 || n == 0)
    {
        return 1;
    }
        return fat(n - 1) * n;
    
}

float expo(float b, int e) {

   float resultado = 1;
    int i = 0;

   if(e > 0)
   {
      while(i < e)
      {
         resultado = resultado * b; 
         i++;
      }
        
    }

   if(e < 0)
   {
      while(i > e)
      {
         resultado = resultado / b;
         i--;
      }
      
   }
   return resultado;
}

float magico(float x, int n) {
   
   int i;
   float solucao=0;
    
   for( i=0; i<=n; i++)
   {
      solucao = solucao + ((expo(- 1, i) * expo(x, (2 * i) + 1)) / fat(i + 1));
   }
   return solucao;
    
}