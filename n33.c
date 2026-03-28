// Ler o raio de um círculo. Calcular e imprimir a área desse círculo

#include <stdio.h>

int main() {
    double radius, area;
    
    printf("Digite o raio do círculo: ");
    scanf("%lf", &radius);
    
    area = 3.14159 * radius * radius;
    
    printf("A área do círculo é: %.2lf\n", area);
    
    return 0;
}