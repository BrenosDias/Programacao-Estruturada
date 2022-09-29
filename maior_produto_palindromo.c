#include <stdio.h>

int main()
{
    long long int i, j, valorOriginal, valorReverso, produto;
    long long int maiorPalindromo = 0;
    
    for(i = 999; i >= 100; i--)
    {
        for(j = i; j >= 100; j--)
        {
            produto = i*j;
            
            if(produto < maiorPalindromo)
            {
                break;
            }
            
            valorOriginal = produto;
            valorReverso = 0;
            
            while(valorOriginal != 0)
            {
                valorReverso = (valorReverso * 10) + (valorOriginal % 10);
                valorOriginal = valorOriginal / 10;
            }
            
            if((produto == valorReverso) && (produto > maiorPalindromo))
            {
                maiorPalindromo = produto;
            }
        }
    }
    
    printf("%lld", maiorPalindromo);
    
    return 0;
}