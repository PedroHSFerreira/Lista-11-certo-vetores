#include <stdio.h>
#define CAP1 5
#define CAP2 5

void funcaoUniao(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int vetorC[], int *tamC)
{
	int i, j;
	
	for(i=0;i<tamanhoB;i++)
	{
		vetorC[i]=vetorB[i];
		
	}
	  
	for(j=0;j<tamanhoA;j++)
	{
		
		if(funcaoBusca(vetorB, tamanhoB, vetorA[j])==-1)
		{
			vetorC[i]=vetorA[j];
			i++;
		}
		
	}
	
	*tamC=i;
	
	
}

int funcaoBusca(int vetor[], int tamanho, int num)
{
	
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if (vetor[i]==num)
		{
			return i;
		}
	
	}
	
	return -1;
	
}


void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencherAleatorioCrescente (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%5 + 1;
	}	
}

void main()
{
	int vetA[CAP1], vetB[CAP2], vetC[CAP1+CAP2], tamanhoC;
	
	
	 preencherAleatorioCrescente (vetA, CAP1);
	 sleep (2);
	 preencherAleatorioCrescente (vetB, CAP2);
	
	
	printf("Vetor A: ");
	
	exibir (vetA, CAP1);
	
	printf("Vetor B: ");
	
	exibir (vetB, CAP2);
	
	funcaoUniao(vetA, CAP1, vetB, CAP2, vetC, &tamanhoC);
	
	
	exibir (vetC,tamanhoC);
	
}
