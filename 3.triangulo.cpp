/* Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma
figura geométrica onde cada lado é menor do que a soma dos outros dois lados). */

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	//entrada
	printf("Informe os valores dos 3 lados do triângulo: ");
	scanf("%d%d%d", &lado1,&lado2,&lado3);
	
	if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2)) //analise se é possivel constituir triangulo
	{
		printf("Possivel constituir os lados de um triângulo!");
	}
	else
	{
		printf ("Não é possivel constituir os lados de um triângulo!");
	}
	
	return 0;
}
