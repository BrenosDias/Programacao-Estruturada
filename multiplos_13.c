#include <stdio.h>

int main()
{
    int x, y, transicao, i, soma, diferenca;
    soma = 0;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(y > x)
    {
        transicao = x;
        x = y;
        y = transicao;
    }
    
    diferenca = x - y;
    
    for(i = 0; i <= diferenca; i++)
    {
        if((y + i) % 13 != 0)
        {
            soma = soma + (y + i);
        }
        
    }
    
    printf("%d\n", soma);
    
    return 0;
}