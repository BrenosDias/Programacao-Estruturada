#include <stdio.h>

int main()
{
	int i, j, k, l, m, n, posicao;
	char frase[100];
	char letra;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
	    int letras[26] = {0};
	    int maiorFrequencia = 0;
	    
		scanf(" %[^\n]", frase);

		for(j = 0; frase[j] != '\0'; j++)
		{
			for(k = 0; k < 26; k++)
			{
				if(frase[j] >= 'A' && frase[j] <= 'Z')
				{
					frase[j] = frase[j] + 32;
				}
				if(frase[j] >= 'a' && frase[j] <= 'z')
				{
					letras[frase[j] - 97]++;
				}
				else
				{
					continue;
				}
			}
		}
	
		for(l = 0; l < 26; l++)
		{
			if(letras[l] > maiorFrequencia)
			{
				maiorFrequencia = letras[l];
				letra = l + 97;
				posicao = l;
			}
		}

		printf("%c", letra);

		for(m = 0; m < 26; m++)
		{
			if(m == posicao)
			{
				continue;
			}
			if(letras[m] == maiorFrequencia)
			{
				letra = m + 97;
				printf("%c", letra);
			}

		}
		printf("\n");
	}
	return 0;
}


