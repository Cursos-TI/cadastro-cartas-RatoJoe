#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//variaveis da primeira carta
char estado, nomeCidade[25], codigoCarta[5];
int populacao, pontosTuristicos;
float area, pib, densidade, pibPerCapita;

//variaveis da segunda carta
char estado2, nomeCidade2[25], codigoCarta2[5];
int populacao2, pontosTuristicos2;
float area2, pib2, densidade2, pibPerCapita2;
// Área para entrada de dados
    //entrada de dados primeira carta
    printf("Dados da primeira carta:\n");
    printf("Digite o estado: ");
    scanf("%c", &estado);
    printf("Digite o código da carta: ");
    scanf("%s", &codigoCarta);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nomeCidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    //entrada de dados segunda carta
    printf("Dados da segunda carta:\n");
    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", &codigoCarta2);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

 // Área para exibição dos dados da cidade
 
    //calculo densidade e pib per capita
    pib = pib * 1000000000; //convertendo o PIB para reais
    pib2 = pib2 * 1000000000; //convertendo o PIB para reais
    densidade = populacao / area;
    pibPerCapita = pib / populacao;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    //dados carta 1
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("PIB: %.2f bilhóes de reais\n", pib);
    printf("Densidade: %.2f habitantes/km²\n", densidade);
    printf("PIB per capita: %.2f reais/habitante\n", pibPerCapita);
    
    //dados carta 2
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("PIB: %.2f bilhóes de reais\n", pib2);
    printf("Densidade: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f reais/habitante\n", pibPerCapita2);

    return 0;


}
