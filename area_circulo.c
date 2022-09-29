#include <stdio.h>

int main(){
    double pi = 3.14159;
    double raio;
    printf("Digite o raio da circunferência:");
        scanf("%lf", &raio);
    double area = pi * raio * raio;
    printf("A=%.4lf", area);
    
    return 0;
    
}