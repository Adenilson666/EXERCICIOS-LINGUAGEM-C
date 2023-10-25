#include <stdio.h>
#include <math.h>

double main ()
{
    double salario_antigo, salario_novo, percentual, reajuste;

    scanf ("%lf", &salario_antigo);

if (salario_antigo <= 280)
{
    percentual = 20;
    reajuste = salario_antigo * percentual / 100;
    salario_novo = salario_antigo + reajuste;
    printf ("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario_antigo, percentual, reajuste, salario_novo);
}
else if (salario_antigo > 280 && salario_antigo < 700)
{
    percentual = 15;
    reajuste = salario_antigo * percentual / 100;
    salario_novo = salario_antigo + reajuste;
    printf ("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario_antigo, percentual, reajuste, salario_novo);
}
else if (salario_antigo >= 700 && salario_antigo < 1500)
{
    percentual = 10;
    reajuste = salario_antigo * percentual / 100;
    salario_novo = salario_antigo + reajuste;
    printf ("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario_antigo, percentual, reajuste, salario_novo);
}
else if (salario_antigo >= 1500)
{
    percentual = 5;
    reajuste = salario_antigo * percentual / 100;
    salario_novo = salario_antigo + reajuste;
    printf ("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salario_antigo, percentual, reajuste, salario_novo);
}
    return 0;
}