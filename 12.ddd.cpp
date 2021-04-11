/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual
cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ddd;
	
	printf("Informe o ddd: ");
	scanf("%d", &ddd);
	
	if(ddd == 61)
	{
		printf("Brasília");
	}
	else if(ddd == 71)
	{
		printf("Salvador");
	}
	else if(ddd == 11)
	{
		printf("Sao Paulo");
	}
	else if(ddd == 21)
	{
		printf("Rio de Janeiro");
	}
	else if(ddd == 32)
	{
		printf("Juiz de fora");
	}
	else if(ddd == 19)
	{
		printf("Campinas");
	}
	else if(ddd == 27)
	{
		printf("Vitória");
	}
	else if(ddd == 31)
	{
		printf("Belo Horizonte");
	}
	else 
	{
		printf("Este ddd: %d, não consta no sistema, por favor! Digite um válido", ddd);
	}
}
