/* Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor
absoluto) elaborando os c�lculos matem�ticos para isso. */

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num, modulo;
	
	printf("Informe o n�mero: ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		modulo = num * (-1);
		printf ("O m�dulo deste n�mero � %d", modulo);
	}
	else if (num >= 0)
	{
		printf ("O m�dulo deste n�mero � %d", num);
	}
}
