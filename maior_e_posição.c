#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, maior_n, posicao;
	maior_n = 0;


	for(i = 1; i <= 5; i++)
	{
		scanf("%d", &n);
		if(n > maior_n)
		{
			maior_n = n;
			posicao = i;

		}
	}
	printf("%d\n", maior_n);
	printf("%d\n", posicao);

	return 0;
}