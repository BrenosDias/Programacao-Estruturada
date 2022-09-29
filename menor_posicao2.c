#include <stdio.h>

int main()
{
    int vetor[100];
    int i, n, posicao;
    int menorNota = 10;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &vetor[i]);
        
        if(vetor[i] <= menorNota)
        {
            menorNota = vetor[i];
            posicao = i - 1;
        }
    }
    
    printf("Menor valor: %d\n", menorNota);
    printf("Posicao: %d\n", posicao);
    
    return 0;
    
}