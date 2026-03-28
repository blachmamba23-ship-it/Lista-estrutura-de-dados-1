//Elabore um programa para simular o jogo de adivinhação:
// o jogador-1 escolhe um número entre 1 e 10;
// o jogador-2 insere no jogo números na tentativa de acertar o número
//escolhido pelo jogador-1.
// O jogador-2 possui 4 chances para tentar adivinhar o número do
//jogador-1.
//Ao final o programa deve informar se ele adivinhou o número, se sim, em qual
//das tentativas

#include <stdio.h>

int main() {
    int player1Number, player2Guess, attempts = 4;
    int guessedCorrectly = 0;

    printf("Jogador 1, escolha um número entre 1 e 10: ");
    scanf("%d", &player1Number);

    if (player1Number < 1 || player1Number > 10) {
        printf("Número inválido. O número deve ser entre 1 e 10.\n");
        return 1;
    }

    for (int i = 1; i <= attempts; i++) {
        printf("Jogador 2, tente adivinhar o número (tentativa %d de %d): ", i, attempts);
        scanf("%d", &player2Guess);

        if (player2Guess == player1Number) {
            guessedCorrectly = 1;
            printf("Parabéns! Você adivinhou o número na tentativa %d!\n", i);
            break;
        } else {
            printf("Número incorreto. Tente novamente.\n");
        }
    }

    if (!guessedCorrectly) {
        printf("Infelizmente, você não conseguiu adivinhar o número. O número era: %d\n", player1Number);
    }

    return 0;
}