/* 9. Fa�a um programa que leia um ano (valor inteiro) e imprima se ele � bissexto ou n�o. OBS:
S�o bissexto todos os anos m�ltiplos de 400. N�o sendo m�ltiplo de 400, s�o bissextos todos
os anos m�ltiplos de 4 mas que n�o s�o m�ltiplos de 100 */

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
