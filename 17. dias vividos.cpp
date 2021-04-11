#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese"); //acentuação
	int dias, idade, anoNascimento, anoAtual;
	char nome [20];
	//entradas
	printf("Olá, informe seu primeiro nome: ");
	scanf("%s", &nome);
	fflush(stdin); 
	printf("Qual o ano atual? ");
	scanf("%d", &anoAtual);
	printf("Qual o ano do seu nascimento? ");
	scanf("%d", &anoNascimento);
	//processamento
	idade = anoAtual - anoNascimento; //calculo de idade do usuario
	dias = idade * 365; //quantos dias o usuario viveu
	//saída
	printf("%s, você já viveu aproximadamente %d dias", nome, dias);
	
	return 0;
}
