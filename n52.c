//Elabore um programa que leia informações de uma pesquisa de um grupo de
//pessoas, obtendo as seguintes informações: idade, salário bruto e se já teve
//algum acidente de trabalho (1-Sim / 0- Não). O final da leitura deve acontecer
//quando for digitado um valor de salário bruto negativo. Para salário bruto
//acima de R$ 1500,00 é descontado o IR de 10% sobre o salário bruto, obtendose o salário líquido. Para valores menores ou iguais a R$ 1500,00 o salário
//líquido será o próprio salário bruto
//a) Calcular e imprimir a média de idade das pessoas que já sofreram
//acidente de trabalho;
//b) Imprimir o total de salários líquidos (em R$) pagos pela empresa.

#include <stdio.h>

int main() {
    int age, hadAccident;
    double grossSalary, netSalary;
    int totalAccidents = 0, totalAge = 0;
    double totalNetSalaries = 0.0;

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &age);

        printf("Digite o salário bruto (negativo para encerrar): ");
        scanf("%lf", &grossSalary);

        if (grossSalary < 0) {
            break; // Encerra a entrada de dados
        }

        printf("Teve algum acidente de trabalho? (1-Sim / 0-Não): ");
        scanf("%d", &hadAccident);

        // Calcula o salário líquido
        if (grossSalary > 1500.00) {
            netSalary = grossSalary * 0.90; // Desconto de 10%
        } else {
            netSalary = grossSalary; // Sem desconto
        }

        totalNetSalaries += netSalary;

        if (hadAccident == 1) {
            totalAccidents++;
            totalAge += age;
        }
    }

    if (totalAccidents > 0) {
        double averageAge = (double)totalAge / totalAccidents;
        printf("Média de idade das pessoas que já sofreram acidente de trabalho: %.2lf\n", averageAge);
    } else {
        printf("Nenhuma pessoa sofreu acidente de trabalho.\n");
    }

    printf("Total de salários líquidos pagos pela empresa: R$ %.2lf\n", totalNetSalaries);

    return 0;
}