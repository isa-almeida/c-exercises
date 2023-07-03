//8. Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser digitado corresponde a temperatura em Fahrenheit ou Celsius. 
//Em seguida o programa deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura na outra unidade de medida. Obs.: (C =5


#include<stdio.h>
#include<stdlib.h>

int main()

{
	char temp;
	float t;
	
	printf("Digite o caracter correspondente a temperatura Fahrenheit ou Celsius F/C: ");
	scanf("%c", &temp);
	
	printf("Digite a temperatura: ");
	scanf("%f", &t);
	
	
	if(temp == 'f')
	{
		printf("%f °C", ((t-32)/1.8));
	}
		else
		if(temp == 'c')
		printf("%f °F 	", ((t*1.8)+32));
		
	
	
}
