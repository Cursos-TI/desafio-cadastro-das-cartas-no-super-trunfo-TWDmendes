#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[5]; // Ex: "A01", "B03", espaço extra para o caractere nulo '\0'
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Instruções iniciais para o usuário
    printf("Cadastro da Carta 1:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // Lê até a quebra de linha

    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a area da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Informe a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a area da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
