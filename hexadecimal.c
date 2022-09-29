#include <stdio.h>
 
int main()
{
    long decimal, quociente, resto;
    int i, j;
    char hexadecimal[100];
 
    scanf("%ld", &decimal);
 
    quociente = decimal;
 
    for(j = 0; quociente != 0; j++)
    {
        resto = quociente % 16;
        if (resto < 10)
            hexadecimal[j] = 48 + resto;
        else
            hexadecimal[j] = 55 + resto;
        quociente = quociente / 16;
    }
 
    
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimal[i]);
    
    return 0;
}