/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/02/2022
	Octavo programa en C: Calculo del area de un sector circular
	*/
	
#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion 
	float R, n, a;
	// Entrada de datos
	printf("Introduce el radio del circulo: ");
	scanf("%f",&R);
	printf("Introduce el angulo del circulo: ");
	scanf("%f",&n);
	// Proceso
	a =M_PI*pow(R,2)*n/360;
	printf("El area del sector circular es: %f", a);
	return 0;
}

