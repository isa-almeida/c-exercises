//4. Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo das variáveis. 
//Refaça este problema sem o uso de outras variáveis que não x e y.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	
	printf("Digite um numero para x: ");
	scanf("%d", &x);	
	
	printf("Digite um numero para y: ");
	scanf("%d", &y);
	
	x = y-x;
	y = y+x;
	y = y - x;
	y = y-x;
	x = x+y;
	
	printf("x = %d e y = %d", x, y);
	
}


/* com variável auxiliar

int main()
{
	int x, y, aux;
	
	printf("Digite um numero para x: ");
	scanf("%d", &x);	
	
	printf("Digite um numero para y: ");
	scanf("%d", &y);
	
	aux = x;
	x = y;
	y = aux; 
	
	printf("x = %d e y = %d", x, y);
	
}
*/
