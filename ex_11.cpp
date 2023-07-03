/*Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável” caso 
o indivíduo se enquadrar em uma das situações acima. Caso contrário o
programa deverá imprimir “Não Aposentável”. */

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
