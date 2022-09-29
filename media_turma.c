#include <stdio.h>
#include <math.h>

int main()
{
	int turma, notas, i;
	float soma, media;
	scanf("%d", &turma);
	soma = 0;
	
	for(i = 0; i < turma; i++)
	{
	    scanf("%d", &notas);
	    if(notas >= 0 && notas <=10)
	    {
	    soma = soma + notas;
	    }
	    else
	    {
	        turma = turma - 1;
	        i--;
	    }
	    
	    
	}
	media = soma / turma;
	printf("%.1f", media);
	
	return 0;
}