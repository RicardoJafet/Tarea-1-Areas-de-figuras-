/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/02/2022
	Decimo programa en C: Calculo del area y volumen de una esfera
	*/
	
#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion 
	float R, a, v;
	// Entrada de datos
	printf("Introduce el radio de la esfera: ");
	scanf("%f",&R);
	// Proceso
	a =4*M_PI*pow(R,2);
	v =4*M_PI*pow(R,3)/3;
	// Salida
	printf("El area de la esfera es: %f", a);
	printf("\nEl volumen de la esfera es: %f", v);
	return 0;
}

