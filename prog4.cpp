/* Autor: Franciscomilan
	Escuela: Universidad uvm
	Profesor: Armando Cruz
	Materia: Programacion Estructurada
	Ciclo: 01/2022
	Realizado: 03/02/2022
	Descripcion:Cuarto programa en C que calcula el area del circulo para la materia programacion 	estructurada
*/

//Libreria entrada y salida
#include<stdio.h>
//Libreria de operaciones matematicas
#include<math.h>

//Principal
int main() {
	//Declaracion
	float r, a;

	//Entrada de datos
	printf("Introduce el radio del circulo: ");
	scanf("%f",&r);

	//proceso
	a=M_PI*pow(r,2);

	//Salida
	printf("El area del circulo es %f",a);

	//Retorno
	return 0;
}