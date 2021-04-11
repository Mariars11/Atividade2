/* Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma
figura geom�trica onde cada lado � menor do que a soma dos outros dois lados). */

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	//entrada
	printf("Informe os valores dos 3 lados do tri�ngulo: ");
	scanf("%d%d%d", &lado1,&lado2,&lado3);
	
	if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2)) //analise se � possivel constituir triangulo
	{
		printf("Possivel constituir os lados de um tri�ngulo!");
	}
	else
	{
		printf ("N�o � possivel constituir os lados de um tri�ngulo!");
	}
	
	return 0;
}
