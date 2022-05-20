/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/02/2022
	Sexto programa en C: Calculo del area de un Trapecio
	*/

#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion
	float B, b, a, h;
	// Entrada de datos
	printf("Introduce la Base mayor: ");
	scanf("%f", &B);
	printf("Introduce la Base menor: ");
	scanf("%f", &b);
	printf("Introduce la Altura: ");
	scanf("%f", &h);
	// Proceso
	a= (B+b)*h/2;
	// Salida
	printf("El area del trapecio es: %f",a);
	return 0;
}

