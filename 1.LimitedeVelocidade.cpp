/*Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao
motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite
de 80 km/h).*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acentuação
	char placa[7];
	float velocidade;
	
	printf("Qual a placa do veículo: \n");
	scanf("%s", &placa);
	fflush(stdin);

	printf("Informe a velocidade de tráfego no Eixo Rodoviário (sem unidade de medida): ");
	scanf("%f", &velocidade);
	
	if (velocidade < 0 || velocidade >= 220)
	{
	    printf("Informe velocidade válida!\n");
	}
	else if (velocidade < 80)
	{
	    printf("Não há multa!\n");
	}
    else if(velocidade >= 80)
    {
    	printf("Consta multa para o carro de placa %s devido a velocidade %.1f km/h no Eixo Rodoviário", placa, velocidade);
	}
	
	return 0;
}
