//Ler a quantidade de anos que um fumante já fuma, o número de cigarros que
//fuma por dia, e o preço de uma carteira de cigarros e calcular a quantidade de
//dinheiro que esse fumante já gastou. Imprimir o resultado         

#include <stdio.h>

int main() {
    int years, cigarettesPerDay;
    double pricePerPack, totalSpent;
    
    printf("Digite a quantidade de anos que você fuma: ");
    scanf("%d", &years);
    
    printf("Digite o número de cigarros que você fuma por dia: ");
    scanf("%d", &cigarettesPerDay);
    
    printf("Digite o preço de uma carteira de cigarros: ");
    scanf("%lf", &pricePerPack);
    
    // Calcular o total gasto
    totalSpent = (years * 365) * (cigarettesPerDay / 20.0) * pricePerPack;
    
    printf("A quantidade de dinheiro que você já gastou com cigarros é: R$ %.2lf\n", totalSpent);
    
    return 0;
}