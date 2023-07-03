//10. Escreva um programa que determina a data cronologicamente maior de duas datas fornecidas pelo usuário. 
//Cada data deve ser fornecida por três valores inteiros onde o primeiro representa um dia, o segundo um mês e o terceiro um ano.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, ano, dia2, mes2, ano2;
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	
	if(dia>31)
	{
		printf("Digite um dia valido!!!");
		return 0;
	}
	
	printf("Digite o mes: ");
	scanf("%d", &mes);
	
	if(mes>12)
	{
		printf("Digite um mes valido!!!");
		return 0;
	}
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	printf("Digite outro dia: ");
	scanf("%d", &dia2);
	
	printf("Digite outro mes: ");
	scanf("%d", &mes2);
	
	printf("Digite outro ano: ");
	scanf("%d", &ano2);
	
	if(ano>ano2)
	{
		printf("%d/%d/%d", dia2, mes2, ano2);
	
	}		
	
	else 
	{
	
		printf("%d/%d/%d", dia, mes, ano);
	}
	
	
	if(ano==ano2)
	{
		if(mes>mes2)
		{
			printf("%d/%d/%d", dia2, mes2, ano2);
			
		}
		else 
		
			if(mes2>mes)
			{
			printf("%d/%d/%d", dia, mes, ano);
			}
			else 
				{
					
					if(mes==mes2)
					{
						if(dia>dia2)
						{
							printf("%d/%d/%d", dia2, mes2, ano2);
						}
					else
						printf("%d/%d/%d", dia, mes, ano);	
					}
				}	
	}
}
