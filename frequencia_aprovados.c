#include <stdio.h>

int main()
{
    int vetor[100];
    int n, i;
    int aprovados = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i] >= 0 && vetor[i] <= 10)
        {
            if(vetor[i] >= 5)
            {
                aprovados++;
            }
        }
    }
    
    printf("%d", aprovados);
}