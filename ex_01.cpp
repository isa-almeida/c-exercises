#include <stdio.h>
#include <stdlib.h>

int main()
{
	int escolha=0;
	
	while(escolha!=5)
	{
		printf("Digite o numero correspondente a sua opcao:\nPizza Margherita - 1\nPizza Portuguesa - 2\nPizza Napolitana - 3\nPizza de Calabresa - 4\nSair - 5\n\nOpcao escolhida: ");
		scanf("%d", &escolha);
		
		printf("A opcao foi %d \n\n", escolha);	
	}	
	
}
