#include<stdio.h>
#include<stdlib.h>

int main()
{
int num, atual, proximo, sequencia;

scanf("%d", &atual);

sequencia=1;

	while(sequencia)
	{
			
		scanf("%d", &proximo);
		
		if(proximo>atual)
		{
		
		atual=proximo;
		printf("sequencia\n");
		continue;
		}
		
		sequencia=0;
	}
	
	printf("Nao e sequencia");	
}
