//Ler o raio de um círculo. Calcular e imprimir o comprimento desse círculo

#include <stdio.h>

int main() {
    double radius, circumference;
    
    printf("Digite o raio do círculo: ");
    scanf("%lf", &radius);
    
    circumference = 2 * 3.14159 * radius;
    
    printf("O comprimento do círculo é: %.2lf\n", circumference);
    
    return 0;
}