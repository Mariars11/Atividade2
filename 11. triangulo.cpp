#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    int lado1, lado2, lado3;
	
	printf("Informe os valores dos 3 lados do tri�ngulo: ");
	scanf("%d%d%d", &lado1,&lado2,&lado3);
	// lado 1 = 2; lado 2 = 2; lado 3 = 4
	if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3) //2 = 2? sim;  2 = 4? n�o; 2 = 4 n�o; = falso
	{
		printf("Esse tri�ngulo � equil�tero!");
	}
	else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) //2 = 2? sim; 2 = 4? n�o;  2 = 4? n�o; = verdadeiro
	{
		printf ("Esse triangulo � is�sceles!");
	}
	else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) //2 != 2? n�o; 2 != 4 sim; 2 != 4 sim; = falso
	{
		printf ("Esse triangulo � escaleno!");
	}
	
	
}
