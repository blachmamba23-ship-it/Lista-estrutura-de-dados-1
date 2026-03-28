//Faça um programa que resolva o somatório abaixo:
//S 
//50
//+
//49
//+
//48
//+ ... +
//1
//1 2 3 50

#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }
    
    printf("O somatório de 1 a 50 é: %d\n", sum);
    
    return 0;
}