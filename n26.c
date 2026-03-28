// /Faça um programa para imprimir a sequência abaixo para um n informado pelo
//usuário. Use uma função que receba um valor n inteiro e imprima até a nésima linha:
//1
//2 2
//3 3 3
//.....
//n n n n n n ... n

#include <stdio.h>

void printSequence(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    printf("Digite um número inteiro para imprimir a sequência: ");
    scanf("%d", &n);
    
    printSequence(n);
    
    return 0;
}


