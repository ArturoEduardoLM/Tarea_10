#include <stdio.h>

void main()
{

	float calif;
	int esAprobado;

	printf("Indique la calificacion ");
	scanf_s("%f", &calif);
	
	printf("Es aprobatorio %i", calif >= 6);

}
