#include<stdio.h>
#include<stdlib.h>

int main()
{
	float seq1=0, seq2=0, seq3=0, seq4=0, n, i;
	
	
	for(i=0; n!=101; i++)
	{
		printf("Digite um numero de 0 a 100 ou digite 101 para sair: ");
		scanf("%f", &n);
		
		if(n>=0 && n<=25)
		{
			seq1++;
		}
		
		else
		{
			if(n>=26 && n<=50)
			{	
			seq2++;
			}
			else
				{
					if(n>=51 && n<=75)
					{
						seq3++;
					}
					else
					{
						if(n>=76 && n<=100)
						{
							seq4++;
						}
					}
				}
		}
	}
	
	printf("Intevalor [0..25]: %.0f\nIntervalor [26..50]: %.0f\nIntervalo [51..75]: %.0f\nIntervalo [76..100]: %.0f", seq1, seq2, seq3, seq4);
}
