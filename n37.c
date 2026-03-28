//Um motorista anota a quilometragem (odômetro) do seu veículo antes e
//depois de cada viagem, bem como os litros de combustível gasto. Ler esses três
//dados e o preço do combustível e imprimir:
//a) A quilometragem rodada
//b) Quantos quilômetros por litro faz o veículo
//c) O custo da viagem

#include <stdio.h>

int main() {
    double initialOdometer, finalOdometer, fuelConsumed, fuelPrice;
    
    printf("Digite a quilometragem inicial (odômetro): ");
    scanf("%lf", &initialOdometer);
    
    printf("Digite a quilometragem final (odômetro): ");
    scanf("%lf", &finalOdometer);
    
    printf("Digite os litros de combustível consumidos: ");
    scanf("%lf", &fuelConsumed);
    
    printf("Digite o preço do combustível por litro: ");
    scanf("%lf", &fuelPrice);
    
    // Calcular a quilometragem rodada
    double distanceTraveled = finalOdometer - initialOdometer;
    
    // Calcular os quilômetros por litro
    double kmPerLiter = distanceTraveled / fuelConsumed;
    
    // Calcular o custo da viagem
    double tripCost = fuelConsumed * fuelPrice;
    
    // Imprimir os resultados
    printf("Quilometragem rodada: %.2lf km\n", distanceTraveled);
    printf("Quilômetros por litro: %.2lf km/l\n", kmPerLiter);
    printf("Custo da viagem: R$ %.2lf\n", tripCost);
    
    return 0;
}