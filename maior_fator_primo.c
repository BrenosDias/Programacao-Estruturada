#include <stdio.h>
#include <math.h>

int main()
{
    long long int n = 600851475143;
    long long int i = 1;
    long long int d = 0;
    long long int maiorPrimo, j;



    for(j = 1; j <= sqrt(n); j++)
    {
        if(n >= 0)
        {
            if(n % j == 0)
            {
                i = 1;
                d = 0;
                while(i <= j)
                {
                    if(j % i == 0)
                    {
                        i++;
                        d++;
                    }
                    else
                    {
                        i++;
                    }
                }
                if(d == 2)
                {
                    maiorPrimo = j;
                }
            }
        }
    }
    printf("%lld", maiorPrimo);
    
    return 0;
    
}