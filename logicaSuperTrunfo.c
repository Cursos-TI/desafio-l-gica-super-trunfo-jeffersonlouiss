#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // variaveis para duas cartas
    char estado_0, estado_1;
    char *cod_0[10], cod_1[10];
    char cidade_0[50], cidade_1[50];
    unsigned long int populacao_0, populacao_1;
    float area_0, area_1;
    float pib_0, pib_1;
    int nPontosTuris_0, nPontosTuris_1;
    float densidadePopulacional_0, densidadePopulacional_1;
    float pibPerCapita_0, pibPerCapita_1;
    int opcao;
    char atributoSelecionado[50];

    // Cadastro das Cartas 01: entrada pelo usuario
    printf("---CADASTRO DA CARTA N-01---\n");
    printf("Estado: ");
    scanf(" %c", &estado_0);
    printf("Código da Carta: ");
    scanf("%s", &cod_0);
    printf("Nome da Cidade: ", &cidade_0);
    scanf("%s", &cidade_0);
    printf("População: ");
    scanf("%lu", &populacao_0);
    printf("Área km²: ");
    scanf("%f", &area_0);
    printf("PIB: ");
    scanf("%f", &pib_0);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &nPontosTuris_0);

    //calcula os atributos desidade populacional e PIB per Capita da carta 1
    densidadePopulacional_0 = (float)populacao_0 / area_0;
    pibPerCapita_0 =  pib_0 / (float)populacao_0;

    // Cadastro das Cartas 02: entrada pelo usuario
    printf("---CADASTRO DA CARTA N-02---\n");
    printf("Estado: ");
    scanf(" %c", &estado_1);
    printf("Codigo da Carta: ");
    scanf("%s", &cod_1);
    printf("Nome da Cidade: ", &cidade_1);
    scanf("%s", &cidade_1);
    printf("População: ");
    scanf("%lu", &populacao_1);
    printf("Área km²: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &nPontosTuris_1);

     //calcula os atributos desidade populacional e PIB per Capita da carta 2
    densidadePopulacional_1 = populacao_1 / area_1;
    pibPerCapita_1 =  pib_1 / populacao_1;

    printf("\n");
    // Exibicao dos dados de cada carta numero 1, densidade populacional e pib per capita
    printf("Carta 1:\n");
    printf("Densidade Populacional: %0.2f hab/km²\n", densidadePopulacional_0);
    printf("PIB per Capita: %0.2f reais\n", pibPerCapita_0);

    printf("\n");
    // Exibicao dos dados de cada carta numero 2, densidade populacional e pib per capita
    printf("Carta 2:\n");
    printf("Densidade Populacional: %0.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB per Capita: %0.2f reais\n", pibPerCapita_1);

    //Menu interativo
    printf("\nEscolha como deseja comparar as Duas cartas:\n");
    printf("1 - Populcao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%i", &opcao);


    //exibe o resultado com base na escolha do usuario
    switch (opcao)
    {
    case 1:
        if (populacao_0 == populacao_1)
        {
            printf("===Empate!===");
            break;
        }
        else if (populacao_0 > populacao_1) {
            printf("Resultado: Carta 1 (%s) VENCEU.\n", cidade_0);
        } else {
            printf("Resultado: Carta 2 (%s) VENCEU.\n", cidade_1);
        }

        printf("Comparação (Atributo: População):\n");
        printf("Carta 1 - %s: %lu\n", cidade_0, populacao_0);
        printf("Carta 2 - %s: %lu\n", cidade_1, populacao_1);
        break;
    case 2:
        if (area_0 == area_1)
        {
            printf("===Empate!===");
            break;
        }
        else if (area_0 > area_1) {
            printf("Resultado: Carta 1 (%s) VENCEU.\n", cidade_0);
        } else {
            printf("Resultado: Carta 2 (%s) VENCEU.\n", cidade_1);
        }

        printf("Comparação (Atributo: Area):\n");
        printf("Carta 1 - %s: %lu\n", cidade_0, populacao_0);
        printf("Carta 2 - %s: %lu\n", cidade_1, populacao_1);
        break;
    case 3:
        if (pib_0 < pib_1)
        {
            printf("===Empate!===");
            break;
        }
        else if (pib_0 > pib_1) {
            printf("Resultado: Carta 1 (%s) VENCEU.\n", cidade_0);
        } else {
            printf("Resultado: Carta 2 (%s) VENCEU.\n", cidade_1);
        }
        
        printf("Comparação (Atributo: PIB):\n");
        printf("Carta 1 - %s: %lu\n", cidade_0, populacao_0);
        printf("Carta 2 - %s: %lu\n", cidade_1, populacao_1);
        break;
    case 4:
        if (nPontosTuris_0 < nPontosTuris_1)
        {
            printf("===Empate!===");
            break;        
        }
        else if (nPontosTuris_0 > nPontosTuris_1) {
            printf("Resultado: Carta 1 (%s) VENCEU.\n", cidade_0);
        } else {
            printf("Resultado: Carta 2 (%s) VENCEU.\n", cidade_1);
        }

        printf("Comparação (Atributo: Numero de Pontos Turisticos):\n");
        printf("Carta 1 - %s: %lu\n", cidade_0, populacao_0);
        printf("Carta 2 - %s: %lu\n", cidade_1, populacao_1);
        break;
    case 5:
        if (densidadePopulacional_0 < densidadePopulacional_1)
        {
            printf("===Empate!===");
            break;        
        }
        else if (densidadePopulacional_0 < densidadePopulacional_1) {
            printf("Resultado: Carta 1 (%s) VENCEU.\n", cidade_0);
        } else {
            printf("Resultado: Carta 2 (%s) VENCEU.\n", cidade_1);
        }

        printf("Comparação (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s: %lu\n", cidade_0, populacao_0);
        printf("Carta 2 - %s: %lu\n", cidade_1, populacao_1);
        break;
    default:
        printf("====Opção Invalida.====\n");
        break;
    }    
    
    return 0;
}
