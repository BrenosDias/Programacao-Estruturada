#include <stdio.h>

int main(){
    double A;
    double B;
    float pesoA = 3.5;
    float pesoB = 7.5;
    
    printf("Qual foi sua nota na p1?\n");
        scanf("%lf", &A);
    printf("Qual foi sua nota na p2\n");
        scanf("%lf", &B);
    double MEDIA = ((A * pesoA) + (B * pesoB))/11;
    printf("MEDIA = %.5lf", MEDIA);
    
    return 0;
}