#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//variaveis da primeira carta
char estado, nomeCidade[25], codigoCarta[5];
int pontosTuristicos;
float area, pib, densidade, pibPerCapita;
unsigned long int populacao;

//variaveis da segunda carta
char estado2, nomeCidade2[25], codigoCarta2[5];
int pontosTuristicos2;
float area2, pib2, densidade2, pibPerCapita2;
unsigned long int populacao2;

//variaveis distintas
int categoria=0, resultado1=0, resultado2=0, atributo1, atributo2;

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

   /*/ //dados carta 1
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
    printf("PIB per capita: %.2f reais/habitante\n", pibPerCapita2);*/

    //Menu
    printf("\nEscolha a primeira categoria para comparação: \n");
    printf("\n[1] para Pontos Turisticos");
    printf("\n[2] para PIB");
    printf("\n[3] para Densidade");
    printf("\n[4] para PIB per capita");
    printf("\n[5] para População");
    printf("\n[6] para Area\n");
    //escolha da categoria
    printf("Digite a primeira categoria: ");
    scanf("%d", &categoria);
    atributo1 = categoria;

    switch (categoria) {
        case 1:
            if (pontosTuristicos > pontosTuristicos2) {
                printf("\nCidade %s venceu a cidade %s em pontos turisticos!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("\nCidade %s venceu a cidade %s em pontos turisticos!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em pontos turisticos entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 2:
            if (pib > pib2) {
                printf("\nCidade %s venceu a cidade %s em PIB!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (pib < pib2) {
                printf("\nCidade %s venceu a cidade %s em PIB!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em PIB entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 3:
            if (densidade > densidade2) {
                printf("\nCidade %s venceu a cidade %s em Densidade!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (densidade < densidade2) {
                printf("\nCidade %s venceu a cidade %s em Densidade!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em Densidade entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 4:
            if (pibPerCapita > pibPerCapita2) {
                printf("\nCidade %s venceu a cidade %s em PIB per capita!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (pibPerCapita < pibPerCapita2) {
                printf("\nCidade %s venceu a cidade %s em PIB per capita!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em PIB per capita entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 5:
            if (populacao > populacao2) {
                printf("\nCidade %s venceu a cidade %s em População!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (populacao < populacao2) {
                printf("\nCidade %s venceu a cidade %s em População!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em População entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 6:
            if (area > area2) {
                printf("\nCidade %s venceu a cidade %s em Area!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (area < area2) {
                printf("\nCidade %s venceu a cidade %s em Area!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em Area entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        // Adicione os casos para as outras categorias aqui
        default:
            printf("\nCategoria inválida!");
    }
    
    //segundo atributo
    printf("\nEscolha a segundacategoria para comparação: \n");
    printf("\n[1] para Pontos Turisticos");
    printf("\n[2] para PIB");
    printf("\n[3] para Densidade");
    printf("\n[4] para PIB per capita");
    printf("\n[5] para População");
    printf("\n[6] para Area\n");
    //escolha da categoria
    printf("Digite a segunda categoria: ");
    scanf("%d", &categoria);
    atributo2 = categoria;

    if (atributo1 == atributo2) {
        printf("\nA categoria escolhida para comparação é a mesma. Por favor, escolha categorias diferentes para uma comparação válida.");
    } else {
        switch (categoria) {
        case 1:
            if (pontosTuristicos > pontosTuristicos2) {
                printf("\nCidade %s venceu a cidade %s em pontos turisticos!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("\nCidade %s venceu a cidade %s em pontos turisticos!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em pontos turisticos entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 2:
            if (pib > pib2) {
                printf("\nCidade %s venceu a cidade %s em PIB!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (pib < pib2) {
                printf("\nCidade %s venceu a cidade %s em PIB!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em PIB entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 3:
            if (densidade > densidade2) {
                printf("\nCidade %s venceu a cidade %s em Densidade!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (densidade < densidade2) {
                printf("\nCidade %s venceu a cidade %s em Densidade!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em Densidade entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 4:
            if (pibPerCapita > pibPerCapita2) {
                printf("\nCidade %s venceu a cidade %s em PIB per capita!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (pibPerCapita < pibPerCapita2) {
                printf("\nCidade %s venceu a cidade %s em PIB per capita!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em PIB per capita entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 5:
            if (populacao > populacao2) {
                printf("\nCidade %s venceu a cidade %s em População!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (populacao < populacao2) {
                printf("\nCidade %s venceu a cidade %s em População!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em População entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        case 6:
            if (area > area2) {
                printf("\nCidade %s venceu a cidade %s em Area!", nomeCidade, nomeCidade2);
                resultado1 = ++ resultado1;
            } else if (area < area2) {
                printf("\nCidade %s venceu a cidade %s em Area!", nomeCidade2, nomeCidade);
                resultado2 = ++ resultado2;
            } else {
                printf("\nEmpate em Area entre as cidades %s e %s!", nomeCidade, nomeCidade2);
            }
            break;
        // Adicione os casos para as outras categorias aqui
        default:
            printf("\nCategoria inválida!");
    }
    }

    if (resultado1 > resultado2) {
        printf("\nCidade %s venceu a cidade %s com %d vitórias!", nomeCidade, nomeCidade2, resultado1);
    } else if (resultado1 < resultado2) {
        printf("\nCidade %s venceu a cidade %s com %d vitórias!", nomeCidade2, nomeCidade, resultado2);
    } else {
        printf("\nEmpate entre as cidades %s e %s com %d vitórias cada!", nomeCidade, nomeCidade2, resultado1);
    }

    printf("\nResultados finais:\n");
    printf("Cidade %s: %d vitórias\n", nomeCidade, resultado1);
    printf("Cidade %s: %d vitórias\n", nomeCidade2, resultado2);
    printf("\nAtributos comparados:\n");
    switch (atributo1) {
        case 1:
            printf("Atributo 1: Pontos Turisticos\n");
            break;
        case 2:
            printf("Atributo 1: PIB\n");
            break;
        case 3:
            printf("Atributo 1: Densidade\n");
            break;
        case 4:
            printf("Atributo 1: PIB per capita\n");
            break;
        case 5:
            printf("Atributo 1: População\n");
            break;
        case 6:
            printf("Atributo 1: Area\n");
            break;
        default:
            printf("Atributo 1: Categoria inválida\n");
    }
    switch (atributo2) {
        case 1:
            printf("Atributo 2: Pontos Turisticos\n");
            break;
        case 2:
            printf("Atributo 2: PIB\n");
            break;
        case 3:
            printf("Atributo 2: Densidade\n");
            break;
        case 4:
            printf("Atributo 2: PIB per capita\n");
            break;
        case 5:
            printf("Atributo 2: População\n");
            break;
        case 6:
            printf("Atributo 2: Area\n");
            break;
        default:
            printf("Atributo 2: Categoria inválida\n");
    }
    printf("\nObrigado por jogar o Super Trunfo - Países! Até a próxima!");

    return 0;


}