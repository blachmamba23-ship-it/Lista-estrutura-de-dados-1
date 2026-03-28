//Uma bola é solta de uma altura H sobre uma superfície lisa. Essa bola fica
//saltando sobre a superfície lisa durante um determinado tempo. É assumido
//que a bola toca a superfície lisa sempre no mesmo ponto. A distância
//percorrida pela bola é a soma de todos os movimentos ascendentes e
//descendentes que a bola realiza até o seu momento total de parada. A cada
//salto, a bola sobe a uma altura máxima calculada pelo produto da altura do
//salto, exatamente anterior, pelo fator R (0 < R < 1) denominado coeficiente de
//salto. Solicita-se a elaboração de um programa que tenha como entradas os
//valores de H e R, e um certo número inteiro N. Em seguida o programa deve
//calcular a distância percorrida pela bola até o término do n-ésimo salto e
//também a altura do n-ésimo salto.

#include <stdio.h>

int main() {
    double H, R, distance = 0.0, currentHeight;
    int N;

    printf("Digite a altura inicial (H): ");
    scanf("%lf", &H);

    printf("Digite o coeficiente de salto (R): ");
    scanf("%lf", &R);

    printf("Digite o número de saltos (N): ");
    scanf("%d", &N);

    currentHeight = H;

    for (int i = 0; i < N; i++) {
        // A bola desce
        distance += currentHeight;

        // A bola sobe
        currentHeight *= R;
        distance += currentHeight;
    }

    printf("A distância percorrida pela bola até o término do %d-ésimo salto é: %.2lf\n", N, distance);
    printf("A altura do %d-ésimo salto é: %.2lf\n", N, currentHeight);

    return 0;
}