#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3;
	//entrada 
	printf("Informe o n�mero 1: ");
	scanf("%f", &num1);
	printf("Informe o n�mero 2: ");
	scanf("%f", &num2);
	printf("Informe o n�mero 3: ");
	scanf("%f", &num3);
	//condi��es
	if (num1 > num2 && num1 > num3) //se o numero 1 for maior que os demais, ent�o ele � o maior
	{
		printf("O maior n�mero � : %.1f",num1);
	}
	else if (num2 > num1 && num2 > num3) //se o numero 2 for maior que os demais, ent�o ele � o maior
	{
		printf("O maior n�mero � : %.1f",num2);
	}
	else if (num3 > num1 && num3 > num2) //se o numero 3 for maior que os demais, ent�o ele � o maior
	{
		printf("O maior n�mero � : %.1f",num3);
	}
}
