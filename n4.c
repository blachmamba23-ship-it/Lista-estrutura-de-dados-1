//Ler dois números e imprimir a multiplicação entre eles.

#include <stdio.h>

int main() {
    int num1, num2, product;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    product = num1 * num2;
    
    printf("A multiplicação dos dois números é: %d\n", product);
    
    return 0;
}