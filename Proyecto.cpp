/*Prueba*/
#include <stdio.h>
void alancompararativa (int x, int y)
{
if  (x==y){
	printf("Ambos son iguales");
	}
else {
	if (x > y) 
         {
		printf("El primer numero,es mayor que el segundo numero");
         }
	else 
	{
		printf("El segundo numero,es mayor que el primero numero");
	}
     }

}
int alanmultplicacion (int x, int y)
{	int res;
	res = x * y;
	return res;
}
