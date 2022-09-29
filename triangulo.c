#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, i;
	printf("Digite os 3 lados do triangulo: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	if(c > b)
	{
		i = b;
		b = c;
		c = i;
	}
	if(b > a)
	{
		i = a;
		a = b;
		b = i;
	}
	if(c > a)
	{
		i = a;
		a = c;
		c = i;
	}
	if (a >= b + c)
	{
		printf("NAO FORMA TRIANGULO");
	}
	else
	{
		if(pow(a,2) == pow(b,2) + pow(c,2))
		{
			printf("TRIANGULO RETANGULO\n");
		}
		else if(pow(a,2) > pow(b,2) + pow(c,2))
		{
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if(pow(a,2) < pow(b,2) + pow(c,2))
		{
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(a == b && b == c)
		{
			printf("TRIANGULO EQUILATERO\n");
		}
		if(a == b && b != c || b == c && c != a)
		{
			printf("TRIANGULO ISOSCELES\n");
		}

	}


 return 0;   
}