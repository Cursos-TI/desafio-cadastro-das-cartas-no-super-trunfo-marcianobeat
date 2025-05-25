#include <stdio.h>

int main(){
    int populacao;
    float area;
    float pib;
    int Nturistico;
    char cidade[44];
    char estado[33];
    char codigo[22];

    int populacao2;
    float area2;
    float pib2;
    int Nturistico2;
    char cidade2[44];
    char estado2[33];
    char codigo2[22];

    float capita_pib;
    float dencidadeP;

    float capita_pib2;
    float dencidadeP2;



// carta 1

    printf(" ____Jogo Super Trunfo____\n \n");

    printf("Digite sua cidade 01: \n");
    scanf("%s", &cidade);

    printf("Digite o seu estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("O numero de população é de: \n");
    scanf("%d", &populacao);
    
    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("O PIB é: \n");
    scanf("%f", &pib);

    printf("O número de pontos turísticos é de: \n");
    scanf("%d", &Nturistico);


// carta 2

     printf("Digite sua cidade 02: \n");
    scanf("%s", &cidade2);

    printf("Digite o seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

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

    printf(" Cidade 02:%s \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n \n", cidade2, populacao2, area2, pib2, Nturistico2);
    
    dencidadeP = populacao/area
    capita_pib = pib/populacao

    dencidadeP2 = populacao2/area2
    capita_pib2 = pib2/populacao2

    printf("Densidade Populacional da carta1 \n: %f", dencidadeP);
    printf("PIB per Capita: %f \n", capita_pib);

    printf("Densidade Populacional da carta2 \n: %f", dencidadeP2);
    printf("PIB per Capita: %f \n", capita_pib2);

     return 0;

}
