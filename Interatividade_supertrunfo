#include <stdio.h>
#include <string.h>

int main() {
    // -----------------------------
    // Declaração das variáveis
    // -----------------------------
    char nome1[30] = "Brasil";
    char nome2[30] = "Argentina";
    int populacao1 = 214000000, populacao2 = 45000000;
    float area1 = 8516000.0, area2 = 2780000.0;
    float pib1 = 2490.0, pib2 = 632.0; // em bilhões
    int pontos1 = 55, pontos2 = 30;
    float densidade1, densidade2;

    // -----------------------------
    // Cálculo das densidades
    // -----------------------------
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // -----------------------------
    // Menu interativo
    // -----------------------------
    int opcao;

    printf("========================================\n");
    printf("     SUPER TRUNFO - Comparacao de Cartas\n");
    printf("========================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("========================================\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Comparacao de Cartas ===\n");
    printf("Carta 1: %s\nCarta 2: %s\n\n", nome1, nome2);

    // -----------------------------
    // Estrutura switch principal
    // -----------------------------
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);

            // Exemplo de if aninhado (comparação mais elaborada)
            if (pontos1 == pontos2) {
                printf("Empate em pontos turisticos!\n");
                if (pib1 > pib2) {
                    printf("Desempate por PIB: Carta 1 (%s) venceu!\n", nome1);
                } else if (pib2 > pib1) {
                    printf("Desempate por PIB: Carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Ainda assim, empate total!\n");
                }
            } else if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.4f hab/km²\n", nome1, densidade1);
            printf("%s: %.4f hab/km²\n", nome2, densidade2);

            // Regra invertida: menor densidade vence
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha entre 1 e 5.\n");
            break;
    }

    return 0;
}