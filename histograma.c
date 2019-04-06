// Gabriel de Souza Barreto - GRR 20166812

#include <stdio.h>
#include "lcrandom.h"

long histo [100];

void zeravetor()
{
	for (int i = 0; i < 100; ++i)
	{
		histo[i] = 0;
	}
}

long maximo()
{	
	long max = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (histo[i] > max)
			max = histo[i];
	}
	return(max);
}

void vetorhistograma()
{
	long Natual;
	for (int i = 0; i < 1000000; ++i)
	{
		Natual = lcrandom()%100;
		histo[Natual]++;
	}
	long max = maximo();
	for (int i = 0; i < 100; ++i)
	{
		histo[i] = ((histo[i]*100)/max)/2;
	}
}



void desenhahistograma()
{
	printf("   0   10   20   30   40   50   60   70   80   90   100\n");
    printf("   +----+----+----+----+----+----+----+----+----+----+\n");
    for (int i = 0; i < 100; ++i)
    {
    printf("%2d |", i);	
    	for (int j = 0; j < histo[i]; ++j)
       	{
    		printf("*");
    	}
    printf("\n");
    }
}

int main()
{
	zeravetor();
	vetorhistograma();
	printf("Histograma dos valores padrão\n");
	desenhahistograma();
	lcrandom_seed (0);
	//Trocar pelos valores melhores
	lcrandom_parms ( 8121, 28411, 134456);
	zeravetor();
	vetorhistograma();
	printf("Histograma dos novos valores padrão\n");
	desenhahistograma();	
}
