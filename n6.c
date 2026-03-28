//Ler um número e imprimir sua raiz quadrada

#include <stdio.h>

int main() {
    double num, squareRoot;
    
    printf("Digite um número: ");
    scanf("%lf", &num);
    
    if (num < 0) {
        printf("Número inválido. A raiz quadrada de um número negativo não é definida.\n");
    } else {
        squareRoot = sqrt(num);
        printf("A raiz quadrada do número é: %.2lf\n", squareRoot);
    }
    
    return 0;
}