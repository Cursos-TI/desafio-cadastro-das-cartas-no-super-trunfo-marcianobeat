#include <stdio.h>

int main(){
    int populacao;
    float area;
    float pib;
    int Nturistico;
    char cidade[33];

    printf("Digite sua cidade 01: \n");
    scanf("%s", &cidade);

    printf("O numero de população é de: \n");
    scanf("%d", &populacao);
    
    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("O PIB é: \n");
    scanf("%f", &pib);

    printf("O número de pontos turísticos é de: \n");
    scanf("%d", &Nturistico);

     printf(" Cidade 01:%s \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n", cidade, populacao, area, pib, Nturistico);
    
     return 0;

}
