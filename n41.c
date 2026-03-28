// Uma revendedora de carros usados paga a seus funcionários um salário fixo por
//mês e uma comissão também fixa por cada carro vendido e mais 5% do valor
//das vendas por ele efetuadas. Ler o número do vendedor, o nome do vendedor,
//o número de carros vendidos por ele, o valor total de suas vendas, o salário fixo
//e o valor que recebe por carro vendido. Ao final, calcular e imprimir o salário
//mensal do vendedor, juntamente com seu código de vendedor e nome

#include <stdio.h>

int main() {
    int sellerCode, carsSold;
    char sellerName[100];
    double totalSales, fixedSalary, commissionPerCar, monthlySalary;

    printf("Digite o código do vendedor: ");
    scanf("%d", &sellerCode);

    printf("Digite o nome do vendedor: ");
    scanf(" %[^\n]", sellerName); // Lê o nome do vendedor

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carsSold);

    printf("Digite o valor total das vendas: ");
    scanf("%lf", &totalSales);

    printf("Digite o salário fixo do vendedor: ");
    scanf("%lf", &fixedSalary);

    printf("Digite a comissão por carro vendido: ");
    scanf("%lf", &commissionPerCar);

    // Calcula o salário mensal
    monthlySalary = fixedSalary + (carsSold * commissionPerCar) + (0.05 * totalSales);

    // Imprime o código do vendedor, nome e salário mensal
    printf("Código do Vendedor: %d\n", sellerCode);
    printf("Nome do Vendedor: %s\n", sellerName);
    printf("Salário Mensal: R$ %.2lf\n", monthlySalary);

    return 0;
}