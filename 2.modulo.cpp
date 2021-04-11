/* Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor
absoluto) elaborando os cálculos matemáticos para isso. */

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num, modulo;
	
	printf("Informe o número: ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		modulo = num * (-1);
		printf ("O módulo deste número é %d", modulo);
	}
	else if (num >= 0)
	{
		printf ("O módulo deste número é %d", num);
	}
}
