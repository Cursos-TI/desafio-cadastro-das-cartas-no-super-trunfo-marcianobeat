#include <stdio.h>

int main(){
    int populacao;
    float area;
    float pib;
    int Nturistico;
    char cidade[33];

    int populacao2;
    float area2;
    float pib2;
    int Nturistico2;
    char cidade2[33];


    printf(" ____Jogo Super Trunfo____\n \n");

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




     printf("Digite sua cidade 02: \n");
    scanf("%s", &cidade2);

    printf("O numero de população é de: \n");
    scanf("%d", &populacao2);
    
    printf("Digite o tamanho da área: \n");
    scanf("%f", &area2);

    printf("O PIB é: \n");
    scanf("%f", &pib2);

    printf("O número de pontos turísticos é de: \n \n");
    scanf("%d", &Nturistico2);

    printf(" ____Jogo Super Trunfo____\n \n");

    printf(" Cidade 01:%s \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n \n", cidade, populacao, area, pib, Nturistico);

     printf(" Cidade 02:%s \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n", cidade2, populacao2, area2, pib2, Nturistico2);
    
     return 0;

}
