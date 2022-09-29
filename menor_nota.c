#include <stdio.h>

int main()
{
    int vetor[100];
    int n, i;
    int menorNota = 10;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        
        if(vetor[i] < 0)
        {
            i--;
        }
        else
        {
            if(vetor[i] <= menorNota)
            {
                menorNota = vetor[i];
            }
        }
    }
    
    printf("%d", menorNota);
}

