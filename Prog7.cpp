/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/02/2022
	Septimo programa en C: Calculo del area de una corona circular
	*/

#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion 
	float R, r, a;
	// Entrada de datos
	printf("Introduce el radio mayor del circulo: ");
	scanf("%f",&R);
	printf("Introduce el radio menor del circulo: ");
	scanf("%f",&r);
	// Proceso
	a =M_PI*(R*R - r*r);
	printf("El area de la corona circular es: %f", a);
	return 0;
}
