#include <stdio.h>

int main(void) {
    
    char arquivo[100];
    int usarios, videos, avaliacoes, usuario, video, i, j, melhorVideo;
    float avaliacao;
    float maiorMedia = 0;
    FILE *file;
    
    scanf("%s", arquivo);

    file = fopen(arquivo, "r");
    
    if(file == NULL)
    {
        printf("O arquivo nao pode ser aberto");
        return 0;
    }
    
    fscanf(file, "%d", &usarios);
    fscanf(file, "%d", &videos);
    fscanf(file, "%d", &avaliacoes);
    
    int soma[1000] = {0};
    int frequencia[1000] = {0};
    float media[1000] = {0};
    
    int lista[100] = {0};
    
    for(i = 0; i < avaliacoes; i++)
    {
        fscanf(file,"%d", &usuario);
        fscanf(file, "%d", &video);
        fscanf(file, "%f", &avaliacao);
        
        soma[video] = soma[video] + avaliacao;
        frequencia[video]++;
        media[video] = soma[video] / frequencia[video];
        
    }
    
    for(j = 0; j < videos; j++)
    {
        if(frequencia[j] < avaliacoes * 0.10)
        {
            media[j] = 0;
        }
        
        else
        {
            if(media[j] > maiorMedia)
            {
                maiorMedia = media[j];
                melhorVideo = j;
            }
        }
        
        
    }
    printf("%d", melhorVideo);
    
    fclose(file);
}