#include <stdio.h>

int main()
{
    int idade_monica, idade_FA, idade_FB, idade_FC;
    
    scanf("%d", &idade_monica);
    scanf("%d", &idade_FA);
    scanf("%d", &idade_FB);
    
    idade_FC = idade_monica - (idade_FA + idade_FB);
    
    if(idade_FA > idade_FB)
        {
            if(idade_FA > idade_FC)
            {
                printf("%d", idade_FA);
            }
            else
            {
                printf("%d", idade_FC);
            }
        }
    else
    {
        if(idade_FB > idade_FC)
        {
            printf("%d", idade_FB);
        }
        else
        {
            printf("%d", idade_FC);
        }
    }
    
    return 0;
    
}