#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3;
	printf("Informe o n�mero 1: ");
	scanf("%d", &num1);
	printf("Informe o n�mero 2: ");
	scanf("%d", &num2);
	printf("Informe o n�mero 3: ");
	scanf("%d", &num3);
	
	if (num1 < num2 && num1 < num3)
	{
		printf("O menor n�mero � : %d", num1);
	}
	else if (num2 < num1 && num2 < num3)
	{
		printf("O menor n�mero � : %d", num2);
	}
    else if (num3 < num1 && num3 < num2)
	{
		printf("O menor n�mero � : %d", num3);
	}
	
	return 0;
}
