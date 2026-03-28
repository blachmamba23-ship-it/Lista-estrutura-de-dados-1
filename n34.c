// Ler o raio de uma esfera. Calcular e imprimir o volume dessa esfera

#include <stdio.h>

int main() {
    double radius, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%lf", &radius);
    
    volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    
    printf("O volume da esfera é: %.2lf\n", volume);
    
    return 0;
}