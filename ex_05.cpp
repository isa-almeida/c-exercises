//5. Fa�a um programa que leia os valores correspondentes aos tr�s lados a, b e c de um tri�ngulo. O programa ent�o determina se o tri�ngulo � is�sceles, escaleno 
//ou equil�tero, informando isto para o usu�rio, e em seguida imprime a �rea A do tri�ngulo utilizando a f�rmula de Heron.



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
