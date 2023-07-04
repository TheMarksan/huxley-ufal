#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, perc, vaumento, nSalario;
    scanf("%lf", &salario);

    if(salario <= 280){
        nSalario = salario * 1.20;
        vaumento = nSalario - salario;
        perc = (vaumento*100)/salario;

    } else if(salario > 280 && salario < 700){
        nSalario = salario * 1.15;
        vaumento = nSalario - salario;
        perc = (vaumento*100)/salario;
    } else if(salario > 700 && salario < 1500){
        nSalario = salario * 1.10;
        vaumento = nSalario - salario;
        perc = (vaumento*100)/salario;
    } else{
        nSalario = salario * 1.05;
        vaumento = nSalario - salario;
        perc = (vaumento*100)/salario;
    }

    printf("%.2lf\n %.0lf\n %.2lf\n %.2lf", salario, perc, vaumento, nSalario)
    return 0;
}
