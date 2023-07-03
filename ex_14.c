#include<stdio.h>

int main()
{
	int i=1, j, num;
	
	printf("Digite o valor para N: ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		for(j=1; j<=num; j++)
		{
			if(j==i)
				printf("%d", j);
			else
				printf(" ");
		}
		printf("\n");
		i++;
	}
}



