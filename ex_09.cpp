/* 9. Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS:
São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos
os anos múltiplos de 4 mas que não são múltiplos de 100 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ano;
	
	printf("Digite o ano para verificar se e bissexto: ");
	scanf("%d", &ano);
	
	if(ano % 400 == 0)
	{
		printf("O ano e bissexto!");
	}
	else
	{
		if(ano % 4 == 0 && ano % 100 != 0)
		{
			printf("O ano e bissexto!");
		}
		else
		printf("O ano nao e bissexto :(");
	}
}
