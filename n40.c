//Ler três números positivos e inteiros (A, B, C) e calcular a expressão D = (R + S)
// / 2,
//onde R = (A + B) ² e S = (B + C)²

#include <stdio.h>

int main() {
    int A, B, C;
    double R, S, D;
    
    printf("Digite o primeiro número inteiro positivo (A): ");
    scanf("%d", &A);
    
    printf("Digite o segundo número inteiro positivo (B): ");
    scanf("%d", &B);
    
    printf("Digite o terceiro número inteiro positivo (C): ");
    scanf("%d", &C);
    
    R = (A + B) * (A + B); // R = (A + B)²
    S = (B + C) * (B + C); // S = (B + C)²
    D = (R + S) / 2;       // D = (R + S) / 2
    
    printf("O valor de D é: %.2lf\n", D);
    
    return 0;
}