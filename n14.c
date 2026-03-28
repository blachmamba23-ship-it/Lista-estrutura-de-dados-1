// Fazer um algoritmo ECO. Ler 5 números, sendo que o algoritmo deve imprimir
//imediatamente cada número lido


#include <stdio.h>

int main() {
    int num;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("Número lido: %d\n", num);
    }
    
    return 0;
}