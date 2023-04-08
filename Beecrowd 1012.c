#include <stdio.h>

int main(){
	double A, B, C;
	scanf("%lf %lf %lf", &A, &B, &C);
	
	float AreaTriangulo = (A*C)/2;
	
	float pi = 3.14159;
	float AreaCirculo = pi*(C*C);	
	float AreaTrapezio = (A+B)*C/2;
	float AreaQuadrado = B*B;
	float AreaRetangulo = A*B;
	
	printf("TRIANGULO: %.3lf\n", AreaTriangulo);
	printf("CIRCULO: %.3lf\n", AreaCirculo);
	printf("TRAPEZIO: %.3lf\n", AreaTrapezio);
	printf("QUADRADO: %.3lf\n", AreaQuadrado);
	printf("RETANGULO: %.3lf\n", AreaRetangulo);
	
	return 0;
}