#include <stdio.h>

int main()
{
	int i, j;
	int maior = 0;
	char frase1[50];
	char frase2[50];
	int matriz[50][50];

	scanf(" %[^\n]", frase1);
	scanf(" %[^\n]", frase2);

	for(i = 0; frase1[i] != '\0'; i++)
	{
		for(j = 0; frase2[j] != '\0'; j++)
		{
			if(frase1[i - 1] == frase2[j - 1])
			{
				contador++;
				matriz[i][j] = matriz[i - 1][j -1] + 1;

				if(matriz[i][j] > maior)
				{
					maior = matriz[i][j];
						
				}
			}
		}
	}
	if(contador == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", maior);
	}
	return 0;
}