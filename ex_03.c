#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, soma=0;
	
	printf("Digite um valor para n: ");
	scanf("%d", &n);
	
	for(i=1;i<=n; i++)
	{
		soma=soma+i;
	}
	
	printf("%d", soma);
	
	
}
