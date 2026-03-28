//Ler dois números inteiros e imprimir o quociente da divisão inteira entre eles

#include <stdio.h>

int main() {
    int num1, num2, quotient;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    if (num2 == 0) {
        printf("Divisão por zero não é permitida.\n");
    } else {
        quotient = num1 / num2;
        printf("O quociente da divisão de %d por %d é: %d\n", num1, num2, quotient);
    }
    
    return 0;
}