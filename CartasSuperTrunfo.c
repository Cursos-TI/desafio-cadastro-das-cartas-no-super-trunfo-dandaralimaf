#include <stdio.h>

int main() {
 // Dados da carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados da carta 1
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da carta 2
    printf("\nDigite o codigo da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Saída dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Saída dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}