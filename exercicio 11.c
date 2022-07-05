#include <stdio.h>
#define CAP 12

void funcaointersecao(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int vetorC[], int *tamC)
{
	int i=0, j;
	
	
	for(j=0;j<tamanhoA;j++)
	{
		
		if(buscar(vetorB, tamanhoB, vetorA[j])!=-1)
		{
			vetorC[i]=vetorA[j];
			i++;
		}
		
		
	}
	
	*tamC=i;
	
}
int buscar (int vetor[], int tamanho, int numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o valor buscado foi encontrado
		if (vetor[i] == numero)
		{
			return i;
		}
	}
	
	//elemento não encontrado
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

void main()
{
	
	int vetA[6]={1,2,3,4,5,6}, vetB[6]={7,8,9,1,2,6}, vetC[CAP], tamanhoC;
	
	printf("Vetor A: ");
	
	exibir (vetA, 6);
	
	printf("Vetor B: ");
	
	exibir (vetB, 6);
	
	funcaointersecao(vetA, 6, vetB, 6, vetC, &tamanhoC);
	
	exibir (vetC, tamanhoC);
	
}
