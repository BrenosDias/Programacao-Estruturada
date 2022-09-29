#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, q, potencia;
	printf("Digite um numero: \n");
	scanf("%d", &n);
	potencia = 2;
	for(i = 2; i <= n;)
	{
		q = pow(i,2);
		printf("%d^%d = %d\n", i, potencia, q);
		i = i + 2;
	}
}