#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese"); //acentua��o
	int dias, idade, anoNascimento, anoAtual;
	char nome [20];
	//entradas
	printf("Ol�, informe seu primeiro nome: ");
	scanf("%s", &nome);
	fflush(stdin); 
	printf("Qual o ano atual? ");
	scanf("%d", &anoAtual);
	printf("Qual o ano do seu nascimento? ");
	scanf("%d", &anoNascimento);
	//processamento
	idade = anoAtual - anoNascimento; //calculo de idade do usuario
	dias = idade * 365; //quantos dias o usuario viveu
	//sa�da
	printf("%s, voc� j� viveu aproximadamente %d dias", nome, dias);
	
	return 0;
}
