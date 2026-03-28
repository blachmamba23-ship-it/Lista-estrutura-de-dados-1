//Ler um número e imprimir seu sucessor.

#include <stdio.h>

int main() {
    int num, successor;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    successor = num + 1;
    
    printf("O sucessor do número é: %d\n", successor);
    
    return 0;
}