#include <stdio.h>

int main() {
    // Variáveis para armazenar as informações da primeira cidade
    char estado1[3], codigo1[5], cidade1[20];
    int populacao1, pontos1;
    float area1, pib1;
    float densidade1, percapita1;

    // Variáveis para armazenar as informações da segunda cidade
    char estado2[3], codigo2[5], cidade2[20];
    int populacao2, pontos2;
    float area2, pib2;
    float densidade2, percapita2;

    // Entrada da primeira cidade
    printf("\nCarta 1:\n");

    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Código: ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos para a Carta 1
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000.0) / populacao1;

    // Entrada da segunda cidade
    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Código: ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000.0) / populacao2;

    // Imprimir as informações finais
    printf("\nInformações das Cidades:\n");

    // Imprimir Carta 1
    printf("\nCarta 1 - Cidade 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);

    // Imprimir Carta 2
    printf("\nCarta 2 - Cidade 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);

    return 0;
}
