#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int valor, horas;
	//entrada
	printf("Informe quantas horas de internet foram utilizadas: ");
	scanf("%d", &horas);
	//condições
	if (horas > 0 && horas <= 20) //impossibilitar valor negativo; valor básico
	{
		printf("O valor a ser pago é: 30 reais");
	}
	else if (horas > 20)
	{
		valor = 30 + (horas - 20) * 3; //cada hora vale 3 reais a mais
		printf ("O valor a ser pago é: %d reais", valor);
	}
	else
	{
		printf ("Valor inválido");
	}
	
	return 0;
}
