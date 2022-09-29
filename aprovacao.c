#include <stdio.h>

int  main()
{
	float p1, p2, media, po;
	printf("Qual foi a sua nota na p1?\n");
	scanf("%f", &p1);
	printf("Qual foi a sua nota na p2?\n");
	scanf("%f", &p2);
	media = (p1 + p2) / 2;
	if(media >= 5)
	{
		printf("Voce foi Aprovado\n");
	}
	else
	{
		printf("Qual foi sua nota na PO?\n");
		scanf("%f", &po);
		if(p1 >= p2)
		{
			media = (p1 + po) / 2;
			if(media >= 5)
			{
				printf("Voce foi Aprovado :)\n");
			}
			else
			{
				printf("Voce foi Reprovado :(\n");
			}
		}
		else{
			media = (p2 + po) / 2;
			if (media >= 5)
			{
				printf("Voce foi Aprovado :)\n");
			}
			else{
				printf("Voce foi Reprovado :(\n");
			}
		}


			
	}	
	return 0;
		
}