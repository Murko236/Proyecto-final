/*Prueba*/
#include <stdio.h>
#include "libalan.h"
int main() {
	int x, y;
	scanf_s("%i %i", &x ,&y);
	alancompararativa(x, y );
	printf("\n");
	int resul = alanmultiplicacion(x, y);
	printf("%i", resul);
	
	}
