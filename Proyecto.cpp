/*Prueba*/
#include <stdio.h>
#include "libalan.h"
#include"MUltiplicacion.h"
int main() {
	int x, y;
	scanf_s("%i %i", &x ,&y);
	alancompararativa(x, y );
	printf("\n");
	int resul = alanmultiplicacion(x, y);
	printf("%i", resul);
	printf("\n");
	int resul2 =  multiplicarDosNumeros(x,y)
	printf("%i",resul2);
	int resul 3= exponencialDeUnNumero(x,y)
	printf ("%i",resul3);
	}


