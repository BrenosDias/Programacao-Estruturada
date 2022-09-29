#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, soma;
	printf("Digite dois numeros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	soma = 0;

	if(a > b)
	{
		a = a - 1;
		while(a > b)
		{
			if(a % 2 != 0)
			{
				soma = soma + a;

			}
			a = a - 1;
		}	
	}
	if(a < b)
	{
		b = b - 1;
		while(a < b)
		{
			if(b % 2 != 0)
			{
				soma = soma + b;
			}
			b = b - 1;
		}
	}

	printf("%d\n", soma );
	


	return 0;
}