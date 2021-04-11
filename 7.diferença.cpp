#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
	int num1, num2,diferenca;
	
	printf("Informe o número 1: ");
	scanf("%d", &num1);
	printf("Informe o número 2: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	{
		diferenca = num1 - num2;
		printf("%d", diferenca);
	}
	if (num2 > num1)
	{
		diferenca = num2 - num1;
		printf("%d", diferenca);
	}
	return 0;
}
