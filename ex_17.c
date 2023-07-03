#include<stdio.h>

int main()
{
	int d1, d2, d3, d4, d5, d6;
	
	for(d1=1; d1<=60; d1++){
		for(d2=d1+1; d2<=60; d2++){
			for(d3=d2+1; d3<=60; d3++){
				for(d4=d3+1; d4<=60; d4++){
					for(d5=d4+1; d5<=60; d5++){
						for(d6=d5+1;d6<=60; d6++){
							
					if(
					
					((d1!=d2) && (d1!=d3) && (d1!=d4) && (d1!=d5) && (d1!=d6) //condições para que cada número seja diferente do outro
					&& (d2!=d3) && (d2!=d4) && (d2!=d5) && (d2!=d6) //condições para que cada número seja diferente do outro
					&& (d3!=d4) && (d3!=d5) && (d3!=d6) //condições para que cada número seja diferente do outro
					&& (d4!=d5) && (d4!=d6) //condições para que cada número seja diferente do outro
					&& (d5!=d6)) //condições para que cada número seja diferente do outro
					&& 
					((d1%2==0) && (d2%2!=0) && (d3%2==0) && (d4%2!=0) && (d5%2==0) && (d6%2!=0)) //par, impar, par, impar, par, impar
					) 
					
					printf("D1: %d D2: %d D3: %d D4: %d D5: %d D6: %d \n", d1, d2, d3, d4, d5, d6);
				    	}
				    }
				}
			}
		}
	}
}
