#include <stdio.h>

int fatorial(int n) {
   if(n == 1 || n == 0)
    {
        return 1;
    }
        return fatorial(n - 1) * n;
}


int combinacao(int i,int j) {
   return fatorial(i) / ( fatorial(i-j) * fatorial(j) );
}

int main() {
   int n, i, j;

   scanf("%d", &n);

   for(i = 0; i <= n; i++) 
   {    
    	for(j = 0; j <= i; j++)
        printf(" %3d", combinacao(i, j));

      printf("\n");
   }
   return 0;
}