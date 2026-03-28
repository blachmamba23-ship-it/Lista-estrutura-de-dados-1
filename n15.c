//Calcular e imprimir a média aritmética de 5 notas.

#include <stdio.h>

int main() {
    float sum = 0.0, average;
    float grade;
    
    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &grade);
        sum += grade;
    }
    
    average = sum / 5;
    
    printf("A média aritmética das notas é: %.2f\n", average);
    
    return 0;
}