#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char nome [30]; 
	char sexo;
	float peso, altura;
	
	printf("Informe seu nome: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	printf("Informe seu sexo (m para masculino e f para feminino): ");
	scanf("%c", &sexo);
	fflush(stdin);
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	if((sexo) == 'm' || (sexo) == 'M')
	{
		peso = (72.5 * altura) - 58;
		printf ("Ilmo. Sr.%s seu peso ideal é %.1f", nome, peso);
	}
	else if ((sexo) == 'f' || (sexo) == 'F')
	{
		peso = (62.1 * altura) - 44.7;
		printf("Ilma. Sra.%s seu peso ideal é %.1f", nome, peso);
	}
	else 
	{
		printf("Informe uma resposta válida!");
	}
	return 0;
}
