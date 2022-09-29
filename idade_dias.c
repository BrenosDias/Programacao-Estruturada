#include <stdio.h>

int main()
{
	int dias;
	scanf("%d", &dias);
	int anos = dias/365;
	printf("%d\n", anos);
	int meses = (dias % 365)/30;
	printf("%d\n", meses);
	int dias_final = (dias % 365)% 30;
	printf("%d\n", dias_final);

	return 0;
}