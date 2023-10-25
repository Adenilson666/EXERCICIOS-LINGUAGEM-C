#include <stdio.h>
#include <math.h>


double areaTriangulo(double base, double altura){
    return (base * altura) / 2;
}

double areaCirculo(double raio){
    return (raio * raio) * 3.14159;
}

double areaTrapezio(double baseMaior, double baseMenor, double altura){
    return ((baseMaior + baseMenor) * altura) / 2;
}

double areaQuadrado(double lado){
    return lado * lado;
}

double areaRetangulo(double base, double altura){
    return base * altura;
}

int main() {
    
    double A, B, C; 
    
    scanf("%lf %lf  %lf", &A, &B, &C);
    
    printf("TRIANGULO: %.3lf\n", areaTriangulo(A, C));
    printf("CIRCULO: %.3lf\n", areaCirculo(C));
    printf("TRAPEZIO: %.3lf\n", areaTrapezio(A, B, C ));
    printf("QUADRADO: %.3lf\n", areaQuadrado(B));
    printf("RETANGULO: %.3lf\n", areaRetangulo(A, B));
    
	return 0;
}