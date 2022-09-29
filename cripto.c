#include <stdio.h>

int main()
{
    char string[100];
    int i, j, k, l, metade, casos, tamanho, auxiliar, size;
    char ultimaLetra;
    
    scanf("%d", &casos);
    
    for(int contador = 0; contador < casos; contador++)
    {
        scanf("%s", string);
        
        for(i = 0; string[i] != '\0'; i++)
        {
            if(string[i] >= 'a' && string[i] <= 'z')
            {
                string[i] = string[i] + 3;
            }
            if(string[i] >= 'A' && string[i] <= 'Z')
            {
                string[i] = string[i] + 3;
            }
        }
        printf("%s\n", string);

        for(tamanho = 0; string[tamanho] != '\0'; tamanho++);
        
        tamanho = tamanho - 1;
        size = tamanho;
        metade = tamanho / 2;
        
        for(i = 0; i < tamanho; i++) 
        {
        auxiliar = string[i];
        string[i] = string[tamanho];
        string[tamanho] = auxiliar;
        tamanho--;
        }

        
        printf("%s\n", string);
        
        for(l = metade; l <= size; l++)
        {
            string[l] = string[l] - 1;
        }
        
        printf("%s\n", string);
    }
    
    return 0;
}