//Ler 5 valores, um de cada vez, e contar quantos destes valores são negativos,
//quantos são positivos e quantos são zero, imprimindo essa informação.

#include <stdio.h>

int main() {
    int countPositive = 0, countNegative = 0, countZero = 0;
    int num;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num > 0) {
            countPositive++;
        } else if (num < 0) {
            countNegative++;
        } else {
            countZero++;
        }
    }
    
    printf("Quantidade de números positivos: %d\n", countPositive);
    printf("Quantidade de números negativos: %d\n", countNegative);
    printf("Quantidade de zeros: %d\n", countZero);
    
    return 0;
}