#include <stdio.h>

int main()
{
    int valor_dado, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;
    scanf("%d", &valor_dado);
    notas_100 = valor_dado / 100;
    notas_50 = (valor_dado % 100) / 50;
    notas_20 = ((valor_dado % 100) % 50) / 20;
    notas_10 = (((valor_dado % 100) % 50) % 20) / 10;
    notas_5 = ((((valor_dado % 100) % 50) % 20) % 10) / 5;
    notas_2 = (((((valor_dado % 100) % 50) % 20) % 10) % 5) / 2;
    notas_1 = (((((valor_dado % 100) % 50) % 20) % 10) % 5) % 2;
    printf("%d\n", valor_dado);
    printf("%d nota(s) de R$ 100,00\n", notas_100);
    printf("%d nota(s) de R$ 50,00\n", notas_50);
    printf("%d nota(s) de R$ 20,00\n", notas_20);
    printf("%d nota(s) de R$ 10,00\n", notas_10);
    printf("%d nota(s) de R$ 5,00\n", notas_5);
    printf("%d nota(s) de R$ 2,00\n", notas_2);
    printf("%d nota(s) de R$ 1,00\n", notas_1);
    
    return 0;
}