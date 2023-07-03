#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, maior_primo=0, i, j, primo=0;
	
	printf("Digite um valor para n: ");
	scanf("%d", &n);
	
	for(i=n; i>=2; i--)
	{
		if(primo==0)
		{
			for(j=2; j<i; j++)
			{
				if(i%j==0)
				{
					primo=0;
					break;
				}
				else
					primo=i;
					continue;
			}
		}
		else
		break;
	} 

	for(i=n; maior_primo==0; i++)
	{
		for(j=2; j<n; j++)
		{
			if(i%j==0)
			{
				maior_primo=0;
				break;
			}
			else
				maior_primo=i;
				continue;
		}
	}
	
	printf("o maior numero primo menor ou igual a n e: %d \no menor numero primo maior ou igual a n e: %d", primo, maior_primo);
}
