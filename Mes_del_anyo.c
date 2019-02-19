#include <stdio.h>

int main(int argc, char const *argv[])
{
	//declara la variable donde se guarda el numero del mes
	int mes;

	//punto de inicio para el gotto
	inicio:

	//pregunta por ese numero
	printf("Dime el número de un mes del año\n");

	//almacena el numero dado en la variable "mes"
	scanf("%d", &mes);

	switch (mes){

		case 1: printf("El mes %d es Enero \n",mes);
				break;

		case 2: printf("El mes %d es Febrero \n",mes);
				break;

		case 3: printf("El mes %d es Marzo \n",mes);
				break;

		case 4: printf("El mes %d es Abril \n",mes);
				break;

		case 5: printf("El mes %d es Mayo\n",mes);
				break;

		case 6: printf("El mes %d es Junio\n",mes);
				break;

		case 7: printf("El mes %d es Julio\n",mes);
				break;

		case 8: printf("El mes %d es Agosto\n",mes);
				break;

		case 9: printf("El mes %d es Septiembre\n",mes);
				break;

		case 10: printf("El mes %d es Octubre\n",mes);
				break;

		case 11: printf("El mes %d es Nobiembre\n",mes);
				break;

		case 12: printf("El mes %d es \n",mes);
				break;

		default : printf("El número dado no está entre el 1 y el 12\n");
		
				/*al no tener ningun numero valido le decimos con 
				el goto que vuelva al inicio, 
				tambien se puede hace con un while al
				principio el cual no se rompa salvo que el
				numero este entre 1 y 12*/

				  goto inicio;
				


	}

	return 0;
}