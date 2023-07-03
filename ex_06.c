#include<stdio.h>

int main()
{
	int m, n, resto, result;
	
	printf("Digite o valor para M: ");
	scanf("%d", &m);
	
	printf("Digite o valor para N: ");
	scanf("%d", &n);

	if(n==0)
	{
	printf("O MDC e &d", m);
	}
	else
	{
		if(m>=n)
		{
			resto=(m%n);
			while(resto!=0)
			{
				resto=m%n;
				m=n;
				n=resto;
				if(resto!=0)
				result=resto;
	
				else
				break;
			}
		}
	
		else
		{
		while(n>m)
		printf("Digite o valor para M: ");
		scanf("%d", &m);
	
		printf("Digite o valor para N: ");
		scanf("%d", &n);	
		}
	}

	printf("O MDC e %d", result);
}
