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

    int opicao;

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

    printf("O número de pontos turísticos é de: \n");
    scanf("%d", &Nturistico2);

    printf(" ____Jogo Super Trunfo____\n \n");

    printf(" Cidade 01:%s \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n Estado:%s \n Códico da carta:%s \n \n", cidade, populacao, area, pib, Nturistico, estado, codigo);

    printf(" Cidade 02:%s \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n Estado:%s \n Códico da carta:%s \n \n", cidade2, populacao2, area2, pib2, Nturistico2, estado2, codigo2);
    
    dencidadeP = populacao/area;
    capita_pib = pib/populacao;
    float superP = populacao + area + pib + Nturistico + capita_pib / dencidadeP;

    dencidadeP2 = populacao2/area2;
    capita_pib2 = pib2/populacao2;
    float superP2 = populacao2 + area2 + pib2 + Nturistico2 + capita_pib2 / dencidadeP2;

    printf("Escolha o desafio:\n");
    printf("1. População\n");
    printf("2. Aria\n");
    printf("3. PIB\n");
    printf("4. Turismo\n");
    printf("5. Super Poder\n");
    scanf("%d", &opicao);

    switch (opicao)
    {
    case 1:
     if (populacao > populacao2){
        printf("Carta 1 venceu!\n\n");
    }
    else if (populacao < populacao2){
        printf("Carta 2 venceu!\n\n");
    }
    else{
        printf("Empate!");
    }
        break;
case 2:
     if (area > area2){
        printf("Carta 1 venceu!\n\n");
    }
    else if (area < area2){
        printf("Carta 2 venceu!\n\n");
    }
    else{
        printf("Empate!");
    }
    case 3:
     if (pib > pib2){
        printf("Carta 1 venceu!\n\n");
    }
    else if (pib < pib2){
        printf("Carta 2 venceu!\n\n");
    }
    else{
        printf("Empate!");
    }
    case 4:
     if (Nturistico > Nturistico2){
        printf("Carta 1 venceu!\n\n");
    }
    else if (Nturistico < Nturistico2){
        printf("Carta 2 venceu!\n\n");
    }
    else{
        printf("Empate!");
    }
    case 5:
     if (superP > superP2){
        printf("Carta 1 venceu!\n\n");
    }
    else if (superP < superP2){
        printf("Carta 2 venceu!\n\n");
    }
    else{
        printf("Empate!");
    }
    default:
    printf("Resposta invalida!");
        break;
    }

    int populacao3 = populacao > populacao2;
    float area3 = area > area2;
    float pib3 = pib > pib2;
    int Nturistico3 = Nturistico > Nturistico2;
    float capital_pib3 = capita_pib > capita_pib2;
    float dencidadeP3 = dencidadeP < dencidadeP2;
    float superP3 = superP > superP2;

    printf("Densidade Populacional da carta1: %.2f \n", dencidadeP);
    printf("PIB per Capita: %.2f \n", capita_pib);
    printf("Super Poder:%f\n \n", superP);

    printf("Densidade Populacional da carta2: %.2f \n", dencidadeP2);
    printf("PIB per Capita: %.2f \n \n", capita_pib2);
    printf("Super Poder:%f\n \n", superP2);

    printf(" se for '1' ponta para cidade1 se for '0' ponto para cidade2: \n População:%d \n Área:%f \n PIB:%f \n Número de pontos turísticos:%d \n Densidade Populacional:%f \n PIB per Capita:%f\n Super Poder:%f \n \n", populacao3, area3, pib3, Nturistico3, dencidadeP3, capital_pib3,superP3);

    return 0;

}
