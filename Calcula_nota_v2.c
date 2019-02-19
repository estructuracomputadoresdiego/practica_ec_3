#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nota;

	printf("Dame la nota numérica\n");
	scanf("%d",&nota);

	switch (nota){

		case 5:
		case 6: printf("Aprobado\n");
				break;

		case 7:
		case 8: printf("Notable\n");
				break;

		case 9:
		case 10: printf("Sobresaliente\n");
				 break;

		default: printf("Suspenso\n");
	}

	return 0;
}