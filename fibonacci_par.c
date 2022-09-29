#include<stdio.h>


int main()
{
    int x = 0;
    int y = 1; 
    int fibo = 0; 
    int somapar = 0; 
    int n;
    

    scanf("%d", &n);

    fibo = x + y;
    while(fibo < n)
    	{
    		x = y;
    		y = fibo;
    		
    		if((fibo % 2) == 0)
    		{
    			somapar = fibo + somapar;
    		}
    		fibo = x + y;
    	}
    printf("%d", somapar);

    return 0;
}