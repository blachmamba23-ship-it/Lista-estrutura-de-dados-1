// Ler a idade de três indivíduos e imprimir a média de idade deles 

#include <stdio.h>

int main() {
    int age1, age2, age3;
    float averageAge;
    
    printf("Digite a idade do primeiro indivíduo: ");
    scanf("%d", &age1);
    
    printf("Digite a idade do segundo indivíduo: ");
    scanf("%d", &age2);
    
    printf("Digite a idade do terceiro indivíduo: ");
    scanf("%d", &age3);
    
    averageAge = (age1 + age2 + age3) / 3.0;
    
    printf("A média de idade dos três indivíduos é: %.2f\n", averageAge);
    
    return 0;
}