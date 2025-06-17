#include <stdio.h>

int main() {
    // Declaracao de variaveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaracao de variaveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    // Leitura dos dados da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibicao dos dados
    printf("\n=== COMPARACAO ENTRE CARTAS ===\n");

    // Populacao
    printf("\nPopulacao:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu\n");
        pontosCarta1++;
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Empate\n");
    }

    // Area
    printf("\nArea:\n");
    if (area1 > area2) {
        printf("Carta 1 venceu\n");
        pontosCarta1++;
    } else if (area2 > area1) {
        printf("Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Empate\n");
    }

    // PIB
    printf("\nPIB:\n");
    if (pib1 > pib2) {
        printf("Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Empate\n");
    }

    // Pontos Turisticos
    printf("\nPontos Turisticos:\n");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Empate\n");
    }

    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Pontos da Carta 1: %d\n", pontosCarta1);
    printf("Pontos da Carta 2: %d\n", pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("Carta 1 venceu o jogo!\n");
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Carta 2 venceu o jogo!\n");
    } else {
        printf("Empate geral!\n");
    }

    return 0;
}
