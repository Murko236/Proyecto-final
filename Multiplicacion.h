#include <stdio.h>
#include <math.h>

//Código de qué hará cada función

int multiplicarDosNumeros(int num1, int num2) {
	int resultado = num1 * num2;
	return resultado;
}

int exponencialDeUnNumero(int num, int exp) {
	int resultado = 1;
	for (int i = exp; i != 0; i--) {
		resultado *= num;
	}
	return resultado;
}