//Uma empresa tem para um determinado funcionário os dados a seguir:
// NOME DO FUNCIONÁRIO
// NÚMERO DE HORAS QUE ELE TRABALHA
// NÚMERO DE DEPENDENTES
//a) Considere que a empresa paga R$3,00 por hora R$100,00 por dependente.
//São feitos descontos de 13,5% sobre o salário/trabalho. Faça um algoritmo
//que imprima o nome do funcionário e o seu salário líquido

#include <stdio.h>

int main() {
    char name[100];
    int hoursWorked, dependents;
    double grossSalary, netSalary;

    printf("Digite o nome do funcionário: ");
    fgets(name, sizeof(name), stdin); // Lê o nome do funcionário

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &hoursWorked);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependents);

    // Calcula o salário bruto
    grossSalary = (hoursWorked * 3.00) + (dependents * 100.00);

    // Aplica o desconto de 13,5%
    netSalary = grossSalary * (1 - 0.135);

    // Imprime o nome do funcionário e o salário líquido
    printf("Funcionário: %s", name);
    printf("Salário líquido: R$ %.2lf\n", netSalary);

    return 0;
}