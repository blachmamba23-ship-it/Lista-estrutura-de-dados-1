//O custo ao consumidor de um carro novo é a soma do custo de fábrica,
//acrescido da porcentagem do distribuidor, mais os impostos (aplicados ao
//custo de fábrica). Supondo que a porcentagem do distribuidor seja de 28% e os
//impostos de 45%, ler o custo de fábrica de um carro e imprimir o custo do
//consumidor

#include <stdio.h>

int main() {
    double factoryCost, distributorPercentage = 0.28, taxPercentage = 0.45;
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%lf", &factoryCost);
    
    double distributorCost = factoryCost * distributorPercentage;
    double taxCost = factoryCost * taxPercentage;
    
    double consumerCost = factoryCost + distributorCost + taxCost;
    
    printf("O custo ao consumidor do carro é: R$ %.2lf\n", consumerCost);
    
    return 0;
}