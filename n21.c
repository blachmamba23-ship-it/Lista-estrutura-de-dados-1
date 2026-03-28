//Escreva um programa para ler dois números inteiros e mostrar na tela o
//produto entre eles, sendo que este cálculo deve ser realizado através de soma
//sucessivas. Exemplo: 3 x 5 = 3 + 3 + 3 + 3 + 3 ou 5 + 5 + 5.

#include <stdio.h>

int main() {
    int num1, num2, product = 0;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    for (int i = 0; i < num2; i++) {
        product += num1;
    }
    
    printf("O produto de %d por %d é: %d\n", num1, num2, product);
    
    return 0;
}