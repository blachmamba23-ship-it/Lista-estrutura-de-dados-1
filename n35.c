// Ler o raio e a altura de um cilindro. Calcular e imprimir o volume desse cilindro

#include <stdio.h>

int main() {
    double radius, height, volume;
    
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &radius);
    
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &height);
    
    volume = 3.14159 * radius * radius * height;
    
    printf("O volume do cilindro é: %.2lf\n", volume);
    
    return 0;
}