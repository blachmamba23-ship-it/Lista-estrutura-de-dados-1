//Escreva um programa para leia um conjunto de 10 números e indique a
//quantidade de pares e ímpares.
//DICA: Para descobrir se o número é par deve ser feita a divisão por 2, se
//o resto  zero podemos afirmar que o número é par. Na linguagem C
//resto é dado pelo operador %. Ex.:
//resto = num % 2 ;

#include <stdio.h>

int main() {
    int countEven = 0, countOdd = 0;
    int num;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    
    printf("Quantidade de números pares: %d\n", countEven);
    printf("Quantidade de números ímpares: %d\n", countOdd);
    
    return 0;
}