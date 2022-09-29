#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, R1, R2, denominador;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    delta = pow(b, 2) -4 * a * c;
    denominador = 2 * a;
    if(delta >= 0 && denominador != 0)
    {
        R1 = (-b + sqrt(delta)) / denominador;
        R2 = (-b - sqrt(delta)) / denominador;
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    else{
    printf("Impossivel calcular");
    }
    return 0;
}