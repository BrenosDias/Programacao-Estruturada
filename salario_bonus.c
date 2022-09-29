#include <stdio.h>

int main(){
    char nome[10];
    double salario_fixo;
    double montante;
    double porcentagem = 0.15;
    
    printf("Qual é o seu nome?\n");
        scanf("%s", nome);
    printf("Qual é o seu salário fixo?\n");
        scanf("%lf", &salario_fixo);
    printf("Qual foi o montante de vendas\n");
        scanf("%lf", &montante);
    double bonus = montante * porcentagem;
    double salario = salario_fixo + bonus;
    printf("TOTAL = R$ %.2lf", salario);
    
    return 0;
    
}