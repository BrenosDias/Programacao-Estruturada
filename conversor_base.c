#include <stdio.h>
#include <string.h>
#include <math.h>

int char_int(char* c, int base);

int dec_hex(int );

void dec_bin(char *);

void bin_dec(char *);

void hex_dec(char *);

int main()
{
    int casos, i, j, k, l, decimal, hexadecimal, numeroInt;
   
    char base[3];
    int restoBin[20];
    int restoHex[20];
    char numero[20];
    char numeroVetor[20];
    int decimal2[20];
    int hexadecimal2[20];

    
    scanf("%d", &casos);

    for(i = 0; i < casos; i++)
    {
        scanf("%s %s", numero, base);

        numeroInt = char_int(numero, 10);

        if(base[0] == 'd')
        {
           dec_hex(numeroInt);
        }
    }
    return 0;
}

int char_int(char* c, int base)
{
    int i, len = strlen(c);
    double result = 0;

    for(i = 0; i < len; i++)
    {
        int value = c[i] - (c[i] >= '0' && c[i] <= '9' ? '0' : 'a' - 10);
        result += value * pow(base, len - i - 1);
    }
    return result;
}

int dec_hex(int quociente)
{
    long resto;
    int i, j;
    char hexadecimal[100];

 
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
}
