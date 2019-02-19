#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int Num;
	printf("Escribe un numero:\n");
	scanf("%d", &Num);
	if (Num==3)
	{
		printf("El numero introducido es el 3\n");
	}

	else {

		printf("El numero introducido no es el 3\n");

	}

	printf("Fin del algoritmo.\n");

	return 0;
}