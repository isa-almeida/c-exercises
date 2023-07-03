//7. Escreva um programa lê três números e os imprime em ordem (ordem crescente). 

#include<stdio.h>
#include<stdlib.h>

int main()

{
	int x, y, z;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &z);
	
	if(x<y && x<z)
	{
		if(y<z)
		{
			printf("%d, %d, %d", x, y, z);
		}
		else
		printf("%d, %d, %d", x, z, y);
	}
		else
		{
	
			if(y<x && y<z)
			{
				if(x<z)
				{	
					printf("%d, %d, %d", y, x, z);
				}
			else
				printf("%d, %d, %d", y, z, x);
			}
		
			else
			{
	
				if(z<x && z<y)
				{
					if(x<y)
					{
						printf("%d, %d, %d", z, x, y);
					}
				else
				printf("%d, %d, %d", z, y, x);
				}
			}	
		}
}
