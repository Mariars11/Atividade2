#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3;
	//entrada 
	printf("Informe o número 1: ");
	scanf("%f", &num1);
	printf("Informe o número 2: ");
	scanf("%f", &num2);
	printf("Informe o número 3: ");
	scanf("%f", &num3);
	//condições
	if (num1 > num2 && num1 > num3) //se o numero 1 for maior que os demais, então ele é o maior
	{
		printf("O maior número é : %.1f",num1);
	}
	else if (num2 > num1 && num2 > num3) //se o numero 2 for maior que os demais, então ele é o maior
	{
		printf("O maior número é : %.1f",num2);
	}
	else if (num3 > num1 && num3 > num2) //se o numero 3 for maior que os demais, então ele é o maior
	{
		printf("O maior número é : %.1f",num3);
	}
}
