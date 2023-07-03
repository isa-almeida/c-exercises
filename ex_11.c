#include<stdio.h>

int main()
{
	int valor; 
	scanf("%d", &valor); //variavel sem & não armazenava valor digitado pelo teclado
	
	int n = valor; //variável "n" não seria 100% necessária, mas nesse caso auxilia para manter o valor inicial preservado
	int fatorial = 1; //variável tipo float deu resultado errado quando multiplicada por outra do tipo int
	
	if(n>-1){ //faltou abrir o if para ser reconhecido pelo else (erro: else without a previous if)
	
	while(n>0)
	{
		fatorial*=n; //manipulando dados com float e int dá erro
		n--;
	}
	printf("O fatorial de %d e igual a %d\n", valor, fatorial);
	}
	else
	{
	
	printf("Nao existe fatorial de %d\n", fatorial); //variavel que armazena resutlado é "fatorial" e não "n"
	}
	return 0;
}
