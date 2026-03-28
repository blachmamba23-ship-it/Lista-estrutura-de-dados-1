//Ler a razão de uma PA (Progressão Aritmética), o primeiro termo, o último
//termo e imprimir a soma dos elementos dessa PA

#include <stdio.h>

int main() {
    double commonDifference, firstTerm, lastTerm, sum;
    int numberOfTerms;

    printf("Digite a razão da PA: ");
    scanf("%lf", &commonDifference);

    printf("Digite o primeiro termo da PA: ");
    scanf("%lf", &firstTerm);

    printf("Digite o último termo da PA: ");
    scanf("%lf", &lastTerm);

    // Calcula o número de termos usando a fórmula do n-ésimo termo da PA
    numberOfTerms = ((lastTerm - firstTerm) / commonDifference) + 1;

    // Calcula a soma dos elementos da PA usando a fórmula da soma dos n primeiros termos
    sum = (numberOfTerms / 2.0) * (firstTerm + lastTerm);

    printf("A soma dos elementos da PA é: %.2lf\n", sum);

    return 0;
}