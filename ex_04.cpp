//4. Fa�a um programa que leia dois valores inteiros nas vari�veis x e y e troque o conte�do das vari�veis. 
//Refa�a este problema sem o uso de outras vari�veis que n�o x e y.

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


/* com vari�vel auxiliar

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
