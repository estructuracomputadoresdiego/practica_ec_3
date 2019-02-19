#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nota;

	printf("Escribe la nota numérica\n");

	scanf("%d", &nota);

	if ((nota == 5)||(nota == 6))
	{
		printf("Aprobado\n");
	}
	else{


		if ((nota==7)||(nota == 8))
		{
			printf("Notable\n");
		}

		else{

			if ((nota == 9)||(nota == 10))
			{
			printf("Sobresaliente\n");
			}

			else{

				printf("Suspenso\n");

				}

			}

	
	}


	return 0;
}