/*Crie um programa para ler um caracter �M� ou �F� que representa o sexo de um indiv�duo,
ler a sua idade, e seu tempo de contribui��o. O programa dever� ent�o imprimir �Aposent�vel� caso 
o indiv�duo se enquadrar em uma das situa��es acima. Caso contr�rio o
programa dever� imprimir �N�o Aposent�vel�. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sexo;
	int idade, tempo;
	
	printf("Digite o sexo do individuo M/F: ");
	scanf("%c", &sexo);
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("Digite o tempo de contribuicao: ");
	scanf("%d", &tempo);
	
	if(sexo=='m')
	{
		if(idade>=65 && tempo>=10)
		{
			printf("Aposentavel!");
		}
		else
		if(idade>=63 && tempo>=15)
		{
			printf("Aposentavel!");
		}
	else
	printf("Nao aposentavel");
	}
	
	if(sexo=='f')
	{
		if(idade>=63 && tempo>=10)
		{
			printf("Aposentavel!");
		}
		else
		if(idade>=61 && tempo>=15)
		{
			printf("Aposentavel!");
		}
	else
	printf("Nao aposentavel");
	}
}
