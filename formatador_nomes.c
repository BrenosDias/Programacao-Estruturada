#include <stdio.h>

int main()
{
	int x;

	x = 7 / 2;

	printf("%d", x);

	/*int i;
	char string[100];

	scanf("%[^\n]", string);

	for (i = 0; string[i] != '\0'; i++)
	{
		if(i == 0)
		{
			if(string[i]>= 'a' && string[i] <= 'z')
				putchar(string[i] - 'a' + 'A');
			else
				putchar(string[i]);
		}
		else if(string[i] == 32)
		{
			putchar(string[i]);
			if(string[i + 1] >= 'a' && string[i] <= 'z')
				putchar(string[i + 1] - 'a' + 'A');
			else
				putchar(string[i + 1]);
			i++;
		}
		else
		{
			if(string[i]>= 'A' && string[i] <= 'Z')
				putchar(string[i] + 'a' - 'A');
			else
				putchar(string[i]);
		}
	}
	printf("\n"); */
}
