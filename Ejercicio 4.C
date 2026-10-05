#include <stdio.h>

int main (){
int Trab;
printf("Dime cuantos trabajos tienes\n");
scanf("%d", &Trab);
if(Trab<0)
	printf("Error");
	else if (Trab==0)
	printf("Ponte a buscar");
	else if(Trab==1)
	printf("Enhorabuena");
	else
	printf("Eres pluriempleado");
return 0;
}