//3. Fa�a um programa que leia um n�mero real x e calcule o valor de f(x)=raizquadrada(x)+(x/2)+xx. (pesquise sobre as fun��es sqrt e pow).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double numero, resultado;
	printf("Digite um numero real: ");
	scanf("%lf", &numero);
	
	resultado=sqrt(numero)+(numero/2)+pow(numero, numero);
	
	printf("O resultado e %.2lf", resultado);
	
}
