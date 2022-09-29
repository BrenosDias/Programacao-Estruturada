#include <stdio.h>

int main(){
    double tempo;
    double velocidade;
    printf("Qual foi a duração da viagem?");
    scanf("%lf", &tempo);
    printf("Qual foi a sua sua velocidade média durante a viagem?");
    scanf("%lf", &velocidade);
    double distancia = tempo * velocidade;
    double litros = distancia / 12;
    printf("%.3lf", litros);
    
    return 0;
}
