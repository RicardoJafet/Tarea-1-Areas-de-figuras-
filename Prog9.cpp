/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/02/2022
	Noveno programa en C: Calculo del area y volumen de Tetraedro regular
	*/
	
#include<stdio.h>
#include<math.h>

int main() {
	// Declaracion 
	float L, a, v;
	// Entrada de datos
	printf("Introduce el lado de la figura: ");
	scanf("%f",&L);
	// Proceso
	a = (sqrt(3))*pow(L,2);
	v = (sqrt(2))*pow(L,3)/12;
	// Salida
	printf("El area del Tetraedro es: %f", a);
	printf("\nEl volumen del Tetraedro es: %f", v);
	return 0;
}
