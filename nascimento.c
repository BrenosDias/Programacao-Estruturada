#include <stdio.h>

int main()
{
	int ano;
	int idade;

	printf("Qual eh o ano atual?\n");
		scanf("%d", &ano);
	printf("Qual a sua idade?\n");
		scanf("%d", &idade);
	int nascimento = ano-idade;
	printf("Voce nasceu em %d\n", nascimento);

	return 0;
}