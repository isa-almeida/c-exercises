#include<stdio.h>

int main()
{
	int valor; 
	scanf("%d", &valor); //variavel sem & n�o armazenava valor digitado pelo teclado
	
	int n = valor; //vari�vel "n" n�o seria 100% necess�ria, mas nesse caso auxilia para manter o valor inicial preservado
	int fatorial = 1; //vari�vel tipo float deu resultado errado quando multiplicada por outra do tipo int
	
	if(n>-1){ //faltou abrir o if para ser reconhecido pelo else (erro: else without a previous if)
	
	while(n>0)
	{
		fatorial*=n; //manipulando dados com float e int d� erro
		n--;
	}
	printf("O fatorial de %d e igual a %d\n", valor, fatorial);
	}
	else
	{
	
	printf("Nao existe fatorial de %d\n", fatorial); //variavel que armazena resutlado � "fatorial" e n�o "n"
	}
	return 0;
}
