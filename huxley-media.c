#include <stdio.h>
#include <math.h>

double main ()
{
    double Nota1, Nota2, Nota3;
    double media;

    scanf ("%lf %lf %lf", &Nota1, &Nota2, &Nota3);

    media = (Nota1 + Nota2 + Nota3) / 3;

if (media >= 70 && media <= 100)
{
    printf ("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
}
else if (media >= 40 && media < 70)
{
    printf ("A media do aluno foi %.2lf e ele foi FINAL\n", media);
}
else if (media >= 0 && media < 40)
{
    printf ("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
}
else if (media > 100 || media != 0)
{
    printf ("Media invalida\n");
}

    return 0;
}