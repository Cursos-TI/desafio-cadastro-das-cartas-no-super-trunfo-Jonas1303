#include <stdio.h>

void coletar_dados_carta(char estado[], char codigo[], char cidade[], float *populacao, float *area, float *pib, int *turismo) {
    printf("Digite a sigla do estado:\n");
    scanf(" %c", estado);  // O espaço antes de %c ajuda a limpar o buffer de entrada
    getchar();  // Limpa o buffer para evitar problemas com a leitura seguinte.
    printf("A sigla do estado: %c\n", *estado);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo);
    printf("O código da carta é: %s\n", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("O nome da cidade é: %s\n", cidade);

    printf("Qual a população da cidade?\n");
    scanf("%f", populacao);
    printf("A população da cidade é: %.0f\n", *populacao);

    printf("A área da cidade em km² é:\n");
    scanf("%f", area);
    printf("Área em Km²: %.2f\n", *area);

    printf("Qual o nível econômico da cidade (PIB)?\n");
    scanf("%f", pib);
    printf("O PIB da cidade é: %.2f\n", *pib);

    printf("Quantidade de pontos turísticos da cidade:\n");
    scanf("%d", turismo);  // Agora, turismo é um inteiro
    printf("Quantidade de pontos turísticos da cidade: %d\n", *turismo);
}

int main() {
    // Variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    float populacao1, populacao2, area1, area2, pib1, pib2;
    int turismo1, turismo2;

    // Coleta de dados para a primeira carta
    printf("\n--- Carta 1 ---\n");
    coletar_dados_carta(&estado1, codigo1, cidade1, &populacao1, &area1, &pib1, &turismo1);

    // Coleta de dados para a segunda carta
    printf("\n--- Carta 2 ---\n");
    coletar_dados_carta(&estado2, codigo2, cidade2, &populacao2, &area2, &pib2, &turismo2);

    // Comparação entre as cartas
    printf("\n--- Comparando as cartas ---\n");
    int escolha;
    printf("Escolha uma categoria para comparar:\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Pontos turísticos\n");
    printf("Digite o número da categoria que deseja comparar: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Comparando População:\n");
            if (populacao1 > populacao2) {
                printf("%s tem a maior população: %.0f\n", cidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("%s tem a maior população: %.0f\n", cidade2, populacao2);
            } else {
                printf("Ambas as cidades têm a mesma população: %.0f\n", populacao1);
            }
            break;
        case 2:
            printf("Comparando PIB:\n");
            if (pib1 > pib2) {
                printf("%s tem o maior PIB: %.2f\n", cidade1, pib1);
            } else if (pib2 > pib1) {
                printf("%s tem o maior PIB: %.2f\n", cidade2, pib2);
            } else {
                printf("Ambas as cidades têm o mesmo PIB: %.2f\n", pib1);
            }
            break;
        case 3:
            printf("Comparando Área:\n");
            if (area1 > area2) {
                printf("%s tem a maior área: %.2f km²\n", cidade1, area1);
            } else if (area2 > area1) {
                printf("%s tem a maior área: %.2f km²\n", cidade2, area2);
            } else {
                printf("Ambas as cidades têm a mesma área: %.2f km²\n", area1);
            }
            break;
        case 4:
            printf("Comparando Pontos turísticos:\n");
            if (turismo1 > turismo2) {
                printf("%s tem mais pontos turísticos: %d\n", cidade1, turismo1);
            } else if (turismo2 > turismo1) {
                printf("%s tem mais pontos turísticos: %d\n", cidade2, turismo2);
            } else {
                printf("Ambas as cidades têm o mesmo número de pontos turísticos: %d\n", turismo1);
            }
            break;
        default:
            printf("Opção inválida. Nenhuma comparação realizada.\n");
    }

    return 0;/
}