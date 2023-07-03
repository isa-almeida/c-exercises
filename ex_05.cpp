//5. Faça um programa que leia os valores correspondentes aos três lados a, b e c de um triângulo. O programa então determina se o triângulo é isósceles, escaleno 
//ou equilátero, informando isto para o usuário, e em seguida imprime a área A do triângulo utilizando a fórmula de Heron.



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	float a, b, c, area, s;
	
	printf("Digite o valor de um lado do triangulo: ");
	scanf("%f", &a);
	
	printf("Digite o valor de outro lado do triangulo: ");
	scanf("%f", &b);
	
	printf("Digite o valor do ultimo lado do triangulo: ");
	scanf("%f", &c);
	
	if(a==b && b==c)
	{
		printf("O triangulo e equilatero\n");
	}
	else
	if(a==b || b==c || c==a)
	{
		printf("o triangulo e isosceles\n");
	}
	else
	printf("o triangulo e escaleno\n");
	
	s=(a+b+c)/2;
	
	area=(sqrt((s*(s-a))*(s-b)*(s-c)));

	printf("A area e %.2f", area);
	
}
