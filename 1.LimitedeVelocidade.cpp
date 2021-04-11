/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao
motorista somente se ele ser� multado, quando estiver trafegando no Eixo Rodovi�rio (limite
de 80 km/h).*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acentua��o
	char placa[7];
	float velocidade;
	
	printf("Qual a placa do ve�culo: \n");
	scanf("%s", &placa);
	fflush(stdin);

	printf("Informe a velocidade de tr�fego no Eixo Rodovi�rio (sem unidade de medida): ");
	scanf("%f", &velocidade);
	
	if (velocidade < 0 || velocidade >= 220)
	{
	    printf("Informe velocidade v�lida!\n");
	}
	else if (velocidade < 80)
	{
	    printf("N�o h� multa!\n");
	}
    else if(velocidade >= 80)
    {
    	printf("Consta multa para o carro de placa %s devido a velocidade %.1f km/h no Eixo Rodovi�rio", placa, velocidade);
	}
	
	return 0;
}
