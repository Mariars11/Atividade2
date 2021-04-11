#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char nome [30]; 
	char sexo;
	
	printf("Informe seu nome: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	printf("Informe seu sexo (m para masculino e f para feminino): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	if((sexo) == 'm' || (sexo) == 'M')
	{
		printf ("Ilmo. Sr.%s", nome);
	}
	else if ((sexo) == 'f' || (sexo) == 'F')
	{
		printf("Ilma. Sra.%s", nome);
	}
	else 
	{
		printf("Informe uma resposta válida!");
	}
	return 0;
}
