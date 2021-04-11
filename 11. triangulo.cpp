#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    int lado1, lado2, lado3;
	
	printf("Informe os valores dos 3 lados do triângulo: ");
	scanf("%d%d%d", &lado1,&lado2,&lado3);
	// lado 1 = 2; lado 2 = 2; lado 3 = 4
	if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3) //2 = 2? sim;  2 = 4? não; 2 = 4 não; = falso
	{
		printf("Esse triângulo é equilátero!");
	}
	else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) //2 = 2? sim; 2 = 4? não;  2 = 4? não; = verdadeiro
	{
		printf ("Esse triangulo é isósceles!");
	}
	else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) //2 != 2? não; 2 != 4 sim; 2 != 4 sim; = falso
	{
		printf ("Esse triangulo é escaleno!");
	}
	
	
}
