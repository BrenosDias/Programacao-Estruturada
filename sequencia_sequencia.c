#include <stdio.h>

int somatorio(int);

int main()
{
    int n, numero, soma, i, j, k;
    soma = 0;

    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &numero);
        if(numero != 0)
        {	
	        printf("Caso %d: %d numeros\n", i, somatorio(numero) + 1);
	        printf("0 ");
	        for(j = 0; j <= numero; j++)
	        {
	            for(k = 0; k < j; k++)
	            {	
	            	printf("%d ", j);

	        	}
	        }
	        	printf("\n");

    	}
    	else
    	{
    		printf("Caso %d: 1 numero\n", i);
    		printf("0\n");
    	}
    }
    
    return 0;
}

int somatorio(int numero)
{
	if(numero == 1 || numero == 0)
	{
		return 1;
	}
	return numero + somatorio(numero - 1);
}