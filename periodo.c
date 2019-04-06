// Gabriel de Souza Barreto - GRR 20166812

#include <stdio.h>
#include "lcrandom.h"

long periodo[10000000];

void zeravetor()
{
	for (int i = 0; i < 10000000; ++i)
	{
		periodo[i] = 0;
	}
}

long calculaperiodo()
{
	long cont=0, temp;

	do {
		temp = lcrandom(); 
		periodo[temp]++;
		cont++;
	} while (periodo[temp] <= 1);
	return cont;
}

int main()
{
	zeravetor();
	printf("O periodo eh: %ld\n", calculaperiodo());
	zeravetor();
	lcrandom_seed (0);
	//Trocar pelos valores melhores
	lcrandom_parms ( 8121, 28411, 134456);
	printf("O periodo com os novos parametros eh: %ld\n", calculaperiodo());
}
