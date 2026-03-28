// Ler um número, se o mesmo for par imprimir os próximos 10 números pares
seguintes.

#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("Os próximos 10 números pares seguintes são:\n");
        for (int i = 1; i <= 10; i++) {
            printf("%d\n", num + 2 * i);
        }
    } else {
        printf("O número digitado é ímpar. Por favor, digite um número par.\n");
    }
    
    return 0;
}
