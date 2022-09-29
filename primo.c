#include <stdio.h>
#include <math.h>

int main()
{
	int n, d, i;
	printf("Digite um numero: \n");
	scanf("%d", &n);
	d = 1;
	i = 0;

	while(d <= n)
	{
		if(n % d == 0)
		{
			d++;
			i++;
		}
		else
		{
			d++;
		}
	}
	if (i == 2)
	{
		printf("primo\n");
	}
	else
	{
		printf("nao\n");
	}



	return 0;
}