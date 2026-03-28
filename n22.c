// Elabore um programa que imprima a tabuada dos números solicitados pelo
//usuário. Você deve perguntar se o usuário deseja continuar (1-SIM ou 0-NÃO).
//Formato
//num *  = resultado

#include <stdio.h>

int main() {
    int number, continueTabuada;
    
    do {
        printf("Digite um número para imprimir a tabuada: ");
        scanf("%d", &number);
        
        printf("Tabuada do número %d:\n", number);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
        
        printf("Deseja continuar? (1-SIM ou 0-NÃO): ");
        scanf("%d", &continueTabuada);
        
    } while (continueTabuada == 1);
    
    return 0;
}