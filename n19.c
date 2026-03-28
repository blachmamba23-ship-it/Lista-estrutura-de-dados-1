// Faça um programa que leia 5 números e imprima quantos números positivos
//foram digitados.

#include <stdio.h>

int main() {
    int countPositive = 0;
    int num;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num > 0) {
            countPositive++;
        }
    }
    
    printf("Quantidade de números positivos: %d\n", countPositive);
    
    return 0;
}