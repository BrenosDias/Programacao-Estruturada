#include <stdio.h>

int main()
{
    int vetor[100];
    int n, i;
    int menorNota = 10;
    int segundaNota = 10;
    
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
            if(vetor[i] < menorNota)
            {
                segundaNota = menorNota;
                menorNota = vetor[i];
                
            }
            if(vetor[i] > menorNota && vetor[i] <= segundaNota)
            {
                segundaNota = vetor[i];
            }
        }
    }
    
    printf("%d", segundaNota);
}

