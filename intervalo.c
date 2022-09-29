#include <stdio.h>

int main()
{
	float numero;
	printf("Digite um numero: ");
	scanf("%f", &numero);

	if(numero <= 25.0000 && numero >= 0)
	{
		printf("Intervalo [0,25]\n");
	}
	else if(numero <= 50.0000 && numero > 25.0000)
	{
		printf("Intervalo (25,50]\n");
	}
	else if(numero <= 75.0000 && numero > 50.0000)
	{
		printf("Intervalo (50,75]\n");
	}
	else if(numero <= 100.0000 && numero > 75.0000)
	{
		printf("Intervalo (75,100]\n");
	}
	else
	{
		printf("Fora de intervalo\n");
	}
	return 0;
}