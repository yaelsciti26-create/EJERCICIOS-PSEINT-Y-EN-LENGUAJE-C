#include <stdio.h>
int main ()
{
	int Edad;
	printf("Dime tu edad\n");
	scanf("%d", &Edad);
	if (Edad<18) printf("Eres menor");
	if (Edad >=18){
		printf("\n Eres mayor de edad. \n");
		printf ("Puedes votar");
	}
	
	return 0;
}