#include<stdio.h>

int main()
{
int a=0, b=0, result, i, seq;

printf("Digite o valor para A: ");
scanf("%d", &a);

printf("Digite o valor para B: ");
scanf("%d", &b);


while(i<b)
{
	seq=seq*a;
	i++;
}

printf("Resultado e: %d", seq);
}
