//Ler os lados de um triângulo retângulo e calcular a hipotenusa

#include <stdio.h>

int main() {
    double leg1, leg2, hypotenuse;
    
    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%lf", &leg1);
    
    printf("Digite o comprimento do segundo cateto: ");
    scanf("%lf", &leg2);
    
    hypotenuse = sqrt(leg1 * leg1 + leg2 * leg2);
    
    printf("A hipotenusa do triângulo retângulo é: %.2lf\n", hypotenuse);
    
    return 0;
}