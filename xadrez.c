#include <stdio.h>

int main() {
    printf("Bem-vindo ao Jogo de Xadrez!\n");
// Declaração de variáveis para peças de xadrez
    int peca, torre, bispo, rainha;

// Escolhendo qual peça mover
    do{
        printf("Escolha uma peca para mover:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Sair\n");
        scanf("%d", &peca);
// Se a peça for Torre
        if (peca == 1) {
            for (torre = 1; torre <= 5; torre++) {
                printf("Movendo Torre para a %dº casa a direita\n", torre);
            }
        }
// Se a peça for Bispo
        else if (peca == 2) {
            bispo = 1;
            while (bispo >= 1 && bispo <= 5) {
                printf("Movendo Bispo para a %dº casa na diagonal a direita (cima e direita)\n", bispo);
                bispo++;
            }
        }
// Se a peça for Rainha
        else if (peca == 3) {
            for (rainha = 1; rainha <= 8; rainha++) {
                printf("Movendo Rainha para a %dº casa a esquerda\n", rainha);
            }
        }
// Se a peça for Sair e opção inválida       
        else if (peca == 4) {
            printf("Saindo do jogo...\n");
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }     
    } while (peca != 4);
    printf("Opcao 4 selecionada. Fim do jogo.\n");

    return 0;
}
