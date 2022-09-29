#include <stdio.h>

int main(){
    int segundos, minutos, horas, tempo_dado;
    scanf("%d", &tempo_dado);
    horas = tempo_dado / 3600;
    tempo_dado = tempo_dado % 3600;
    minutos = tempo_dado / 60;
    tempo_dado = tempo_dado % 60;
    
    segundos = tempo_dado;
    
    printf("%d:%d:%d", horas, minutos, segundos);
    
    return 0;
}
