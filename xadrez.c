#include <stdio.h>

int main() {
    printf("Bem-vindo ao Jogo de Xadrez!\n");
    // Declaração de variáveis para peças de xadrez
    int peca, torre, bispo, rainha, cavalo;

    // Escolhendo qual peça mover
    do{
        printf("\nEscolha uma peca para mover:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair\n");
        scanf("%d", &peca);
        // Se a peça for Torre
        if (peca == 1) {
            printf("\nMovimento da Torre: 5 casas para a direita\n");
            for (torre = 1; torre <= 5; torre++) {
                printf("Movimento %d: direita\n", torre);
            }
        }
        // Se a peça for Bispo
        else if (peca == 2) {
            bispo = 1;
            printf("\nMovimento do Bispo: 5 casas na diagonal (cima e direita)\n");
            while (bispo >= 1 && bispo <= 5) {
                printf("Movimento %d: diagonal (cima e direita)\n", bispo);
                bispo++;
            }
        }
        // Se a peça for Rainha
        else if (peca == 3) {
            printf("\nMovimento da Rainha: 8 casas para a esquerda\n");
            for (rainha = 1; rainha <= 8; rainha++) {
                printf("Movimento %d: esquerda\n", rainha);
            }
        }
        // Se a peça for Cavalo
        else if (peca == 4) {
            printf("Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda\n");
            for(cavalo = 1; cavalo <= 2; cavalo++){
                printf("Movimento %d: Baixo\n", cavalo);

                if (cavalo == 2) {
                    int esquerda = 1;
                    printf("Movimento %d: Esquerda\n", esquerda);
                }
            }
        }
        // Saída do jogo
        else if (peca == 5) {
            printf("Saindo do Jogo...\n");
        // Opção invalida    
        }else {
            printf("Opçao invalida. Tente novamente.\n");
        }
    } while (peca != 5);
    printf("Fim do Jogo.\n");
    
    return 0;
}