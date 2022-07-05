#include <stdio.h>
#define TAM 50

void funcaoConta(int vetor[], int tamanho)
{
	int j, i;
	j = 1;
	vetor[0]=1;
	
	
	for(i=1;i<tamanho;i++)
	{
		vetor[i]=vetor[i-1]+j;
		j++;
	}
	
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
	int v[TAM];
	
	funcaoConta(v, TAM);
	
    exibir (v, TAM);
    
	
}
