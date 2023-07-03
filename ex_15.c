#include<stdio.h>

int main()
{
	int i, j, num;
	
	printf("Digite o valor para N: ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
		i++;
	}
}
