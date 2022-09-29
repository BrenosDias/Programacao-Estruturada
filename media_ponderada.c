#include <stdio.h>
#include <math.h>

#define pesox 2
#define pesoy 3
#define pesoz 5
#define somaPeso 10
int main()
{
	int n, i;
	double x, y, z, soma, media;
	soma = 0;
	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Digite 3 numeros: ");
		scanf("%lf %lf %lf", &x, &y, &z);
		soma = (x * pesox) + (y * pesoy) + (z * pesoz);
		media = soma / somaPeso;
		printf("%.1lf\n", media);

	}
	return 0;
}