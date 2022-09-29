#include <stdio.h>
#include <math.h>

int main()
{
	int vetor[100];
	int i, soma, j;
	float n, media;
	soma = 0;
	j = 1;
	printf("Digite quantidade de alunos: ");
	scanf("%f", &n);
	for(i = 0; i < n; i++)
	{
		printf("Digite a nota do aluno %d: ", j);
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
		j++;
	}
	media = soma / n;
	printf("%2.f\n", media);
	
	return 0;
}