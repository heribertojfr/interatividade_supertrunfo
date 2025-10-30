#include <stdio.h>

int main() {
    // -----------------------------------------------------
    // Cartas pré-cadastradas
    // -----------------------------------------------------
    char nome1[30] = "Brasil";
    char nome2[30] = "Argentina";

    int populacao1 = 214000000, populacao2 = 45000000;
    float area1 = 8516000.0, area2 = 2780000.0;
    float pib1 = 2490.0, pib2 = 632.0; // em bilhões
    int pontos1 = 55, pontos2 = 30;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_attr1, valor2_attr1;
    float valor1_attr2, valor2_attr2;
    float soma1, soma2;

    // -----------------------------------------------------
    // Menu principal - escolha do primeiro atributo
    // -----------------------------------------------------
    printf("========================================\n");
    printf("     SUPER TRUNFO - Comparacao Avancada\n");
    printf("========================================\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("========================================\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    // -----------------------------------------------------
    // Menu dinâmico - segunda escolha (sem repetir o 1º)
    // -----------------------------------------------------
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue; // evita repetição
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turisticos\n"); break;
            case 5: printf("5 - Densidade Demografica\n"); break;
        }
    }

    printf("========================================\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    // -----------------------------------------------------
    // Função auxiliar: retorna o valor do atributo escolhido
    // -----------------------------------------------------
    // Para carta 1
    switch (opcao1) {
        case 1: valor1_attr1 = populacao1; break;
        case 2: valor1_attr1 = area1; break;
        case 3: valor1_attr1 = pib1; break;
        case 4: valor1_attr1 = pontos1; break;
        case 5: valor1_attr1 = densidade1; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // Para carta 2
    switch (opcao1) {
        case 1: valor2_attr1 = populacao2; break;
        case 2: valor2_attr1 = area2; break;
        case 3: valor2_attr1 = pib2; break;
        case 4: valor2_attr1 = pontos2; break;
        case 5: valor2_attr1 = densidade2; break;
    }

    // Atributo 2 - carta 1
    switch (opcao2) {
        case 1: valor1_attr2 = populacao1; break;
        case 2: valor1_attr2 = area1; break;
        case 3: valor1_attr2 = pib1; break;
        case 4: valor1_attr2 = pontos1; break;
        case 5: valor1_attr2 = densidade1; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // Atributo 2 - carta 2
    switch (opcao2) {
        case 1: valor2_attr2 = populacao2; break;
        case 2: valor2_attr2 = area2; break;
        case 3: valor2_attr2 = pib2; break;
        case 4: valor2_attr2 = pontos2; break;
        case 5: valor2_attr2 = densidade2; break;
    }

    // -----------------------------------------------------
    // Exibição dos atributos escolhidos e comparação
    // -----------------------------------------------------
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Carta 1: %s\nCarta 2: %s\n\n", nome1, nome2);

    // Primeiro atributo
    printf("Atributo 1: ");
    switch (opcao1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
    }

    printf("%s: %.2f\n", nome1, valor1_attr1);
    printf("%s: %.2f\n\n", nome2, valor2_attr1);

    // Segundo atributo
    printf("Atributo 2: ");
    switch (opcao2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
    }

    printf("%s: %.2f\n", nome1, valor1_attr2);
    printf("%s: %.2f\n\n", nome2, valor2_attr2);

    // -----------------------------------------------------
    // Comparações individuais (com operador ternário)
    // -----------------------------------------------------
    // Regra: maior vence; densidade = menor vence
    float resultado_attr1 = (opcao1 == 5)
        ? (valor1_attr1 < valor2_attr1 ? 1 : (valor2_attr1 < valor1_attr1 ? 2 : 0))
        : (valor1_attr1 > valor2_attr1 ? 1 : (valor2_attr1 > valor1_attr1 ? 2 : 0));

    float resultado_attr2 = (opcao2 == 5)
        ? (valor1_attr2 < valor2_attr2 ? 1 : (valor2_attr2 < valor1_attr2 ? 2 : 0))
        : (valor1_attr2 > valor2_attr2 ? 1 : (valor2_attr2 > valor1_attr2 ? 2 : 0));

    // -----------------------------------------------------
    // Soma dos atributos
    // -----------------------------------------------------
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // -----------------------------------------------------
    // Resultado final
    // -----------------------------------------------------
    printf("========================================\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);
    printf("========================================\n");

    if (soma1 > soma2) {
        printf("Resultado final: Carta 1 (%s) venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("Resultado final: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado final: Empate!\n");
    }

    return 0;
}