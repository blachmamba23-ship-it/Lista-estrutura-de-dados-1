//A Empresa “Sempre Venda” remunera seus 1200 funcionários com salário fixo
//mais comissão, conforme a tabela abaixo:
//Quantidade Produtos Comissão por produto(R$)
//Até 5 produtos 1,50
//De 6 a 50 2,00
//Acima de 50 2,50
//Cada funcionário irá informar a quantidade de produtos vendidos e o salário fixo.
//Pede-se:
//a) O salário que cada funcionário receberá no mês;
//b) A média dos salários pagos pela empresa.
//c) O maior salário fixo.


#include <stdio.h>

int main() {
    int numEmployees = 1200;
    double totalSalaries = 0.0;
    double highestFixedSalary = 0.0;

    for (int i = 0; i < numEmployees; i++) {
        int productsSold;
        double fixedSalary, commissionPerProduct, totalSalary;

        printf("Digite a quantidade de produtos vendidos pelo funcionário %d: ", i + 1);
        scanf("%d", &productsSold);

        printf("Digite o salário fixo do funcionário %d: ", i + 1);
        scanf("%lf", &fixedSalary);

        // Determina a comissão por produto com base na quantidade vendida
        if (productsSold <= 5) {
            commissionPerProduct = 1.50;
        } else if (productsSold <= 50) {
            commissionPerProduct = 2.00;
        } else {
            commissionPerProduct = 2.50;
        }

        // Calcula o salário total do funcionário
        totalSalary = fixedSalary + (productsSold * commissionPerProduct);
        totalSalaries += totalSalary;

        // Verifica se o salário fixo é o maior até agora
        if (fixedSalary > highestFixedSalary) {
            highestFixedSalary = fixedSalary;
        }

        printf("O salário total do funcionário %d é: R$ %.2lf\n", i + 1, totalSalary);
    }

    // Calcula a média dos salários pagos pela empresa
    double averageSalary = totalSalaries / numEmployees;

    printf("A média dos salários pagos pela empresa é: R$ %.2lf\n", averageSalary);
    printf("O maior salário fixo é: R$ %.2lf\n", highestFixedSalary);

    return 0;
}