/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/02/2022
	Quinto programa en C: Calculo del area de un Rombo
	*/

#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion
	float d, D, a;
	// Entrada de datos
	printf("Introduce la diagonal menor: ");
	scanf("%f", &d);
	printf("Introduce la diagonal mayor: ");
	scanf("%f", &D);
	// Proceso
	a= D*d/2;
	// Salida
	printf("El area del rombo es: %f",a);
	return 0;
}
