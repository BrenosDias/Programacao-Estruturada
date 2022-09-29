#include<stdio.h>

float expo(float, int);

int main()
{
   int potencia;
   float n;
   scanf("%f", &n);
   scanf("%d", &potencia);

   printf("%f", expo(n, potencia));
}



float expo(float b, int e) {

   int i, valorInicial;

   valorInicial = b;

   for(i = 1; i < e; i++)
   {
      b = b * valorInicial;
   }
   return b;
}