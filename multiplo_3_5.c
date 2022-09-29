#include <stdio.h>

int main()
{
    int i, n;
    int soma = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            soma = soma + i;
        }
    }
    
    printf("%d", soma);
}