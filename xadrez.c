#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Movimento %d: Direita\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas);
}

// Função recursiva para mover a Rainha
void moverRainha(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Movimento %d: Esquerda\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas);
}

// Função recursiva para mover o Bispo
void moverBispo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return;

    for (int i = 1; i <= 1; i++) {
        printf("Movimento %d: diagonal (cima e direita)\n", passoAtual);
    }
    moverBispo(passoAtual + 1, totalPassos);
}

// Função para mover o Cavalo
void moverCavalo() {
    printf("Movimento do cavalo: 2 casa para Cima e 1 casa para Direita\n");

    int cima = 1;
    int direita = 1;

    for (int i = 1; i <= 2; i++){
        for (int j = 1; j <= 1; j++) {
            printf("Movimento %d: Cima\n", cima);
            cima++;

            if (i < 2) {
                continue; // Continua para o próximo movimento de cima
            }
            printf("Movimento %d: Direita\n", direita);
            direita++;
            break; // Sai do loop interno após mover para a direita 
        }
    }
}

int main() {
    printf("Bem-vindo ao Jogo de Xadrez!\n");

    // Declaração de variáveis para peça de xadrez
    int peca;

    // Escolhendo qual peça mover
    do{
        printf("\nEscolha uma peca para mover:\n");
        printf("1 - Torre\n");
        printf("2 - Rainha\n");
        printf("3 - Bispo\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair\n");
        scanf("%d", &peca);
        
        // Se a peça for Torre
        if (peca == 1) {
            printf("\nMovimento da Torre: 5 casas para a direita\n");
            moverTorre(1, 5); // Chama a função recursiva para mover a Torre
        }

        // Se a peça for Rainha
        else if (peca == 2) {
            printf("\nMovimento da Rainha: 8 casas para a esquerda\n");
            moverRainha(1, 8); // Chama a função recursiva para mover a Rainha
        }

        // Se a peça for Bispo
        else if (peca == 3) {
            printf("\nMovimento do Bispo: 5 casas na diagonal (cima e direita)\n");
            moverBispo(1, 5); // Chama a função recursiva para mover o Bispo
        }

        // Se a peça for Cavalo
        else if (peca == 4) {
            moverCavalo(); // Chama a função para mover o Cavalo
        }

        // Saída do jogo e opção inválida
        else if (peca == 5) {
            printf("Saindo do Jogo...\n");  
        }else {
            printf("Opçao invalida. Tente novamente.\n");
        }
    } while (peca != 5);
    printf("Fim do Jogo.\n");
    
    return 0;
}