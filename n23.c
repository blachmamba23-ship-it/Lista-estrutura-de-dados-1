//Tem-se um conjunto de dados de um grupo de pessoas, serão coletados a
//altura e o sexo (1- masculino, 2 - feminino). O final do conjunto é determinado
//quando for informada uma altura menor ou igual a zeros. Imprima:
//a) A maior e a menor altura do grupo;
//b) O número de homens;
//c) A média de altura das mulheres;
//d) O percentual de mulheres abaixo de 1,68.

#include <stdio.h>

int main() {
    double height, sumFemaleHeight = 0.0;

    int countMale = 0, countFemale = 0, count FemaleBelow168 = 0;

    double maxHeight = 0.0, minHeight = 0.0;

    while (1) {
        printf("Digite a altura (ou um valor menor ou igual a zero para encerrar): ");
        scanf("%lf", &height);

        if (height <= 0) {
            break;
         }
        int
        
        printf("Digite o sexo (1 - masculino, 2 - feminino): ");
        int sex;
        scanf("%d", &sex);
        if (sex == 1) {
            countMale++;
        } else if (sex == 2) {
            countFemale++;
            sumFemaleHeight += height;
            if (height < 1.68) {
                count FemaleBelow168++;
            }
        }
    }

    if (countFemale > 0) {
        double averageFemaleHeight = sumFemaleHeight / countFemale;

        printf("Média de altura das mulheres: %.2lf\n", averageFemaleHeight);

        double percentageFemaleBelow168 = (count FemaleBelow168 / (double)countFemale) * 100;

        printf("Percentual de mulheres abaixo de 1,68: %.2lf%%\n", percentageFemaleBelow168);

    } else {

        printf("Não foram informadas mulheres no grupo.\n");
    }

    if (countMale + countFemale > 0) {
        printf("Número de homens: %d\n", countMale);
        printf("Número de mulheres: %d\n", countFemale);
    } else {
        printf("Nenhuma pessoa foi informada no grupo.\n");
    }

    return 0;
}
