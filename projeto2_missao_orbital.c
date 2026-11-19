/*
 * Projeto 2 - Missao Orbital
 * Disciplina: Algoritmos e Pensamento Computacional
 *
 * Integrantes:
 * - Ricardo Alves Lima - RGM: 47547472
 * - Richard Lima dos Santos - RGM: 47576952
 * - Gustavo Andrade - RGM: 49097474
 *
 * O programa registra tres etapas de treinamento para cada cadete,
 * valida as pontuacoes e apresenta a classificacao final.
 */

#include <stdio.h>

int main(void) {
    int codigoCadete;
    int etapa;
    int pontos;
    int total;
    int continuar;
    float media;

    do {
        printf("\n===== MISSAO ORBITAL =====\n");
        printf("Codigo do cadete: ");
        scanf("%d", &codigoCadete);

        total = 0;

        /* O for garante exatamente tres etapas de treinamento. */
        for (etapa = 1; etapa <= 3; etapa++) {
            printf("Pontuacao da etapa %d (0 a 100): ", etapa);
            scanf("%d", &pontos);

            /* Repete a leitura enquanto a pontuacao for invalida. */
            while (pontos < 0 || pontos > 100) {
                printf("Pontuacao invalida. Digite um valor entre 0 e 100: ");
                scanf("%d", &pontos);
            }

            total += pontos;
        }

        media = total / 3.0f;

        printf("\n---------- RESULTADO ----------\n");
        printf("Cadete: %d\n", codigoCadete);
        printf("Pontuacao total: %d pontos\n", total);
        printf("Media: %.2f\n", media);

        if (media >= 85.0f) {
            printf("Classificacao: COMANDANTE DA MISSAO\n");
            printf("Treinamento concluido com excelencia.\n");
        } else if (media >= 70.0f) {
            printf("Classificacao: PILOTO APROVADO\n");
            printf("Cadete autorizado para a missao.\n");
        } else if (media >= 50.0f) {
            printf("Classificacao: CADETE EM RECUPERACAO\n");
            printf("Novo treinamento recomendado.\n");
        } else {
            printf("Classificacao: TREINAMENTO REINICIADO\n");
            printf("Cadete ainda nao autorizado.\n");
        }

        /* Condicional simples para a pontuacao maxima. */
        if (total == 300) {
            printf("PONTUACAO MAXIMA!\n");
        }

        printf("-------------------------------\n");
        printf("Avaliar outro cadete? 1-Sim | 0-Nao: ");
        scanf("%d", &continuar);

        while (continuar != 0 && continuar != 1) {
            printf("Opcao invalida. Digite 1 para Sim ou 0 para Nao: ");
            scanf("%d", &continuar);
        }
    } while (continuar == 1);

    printf("\nSistema encerrado.\n");

    return 0;
}

