#include <stdio.h>
#define TAM 300

void funcaoSeparaImparPar(int vetor[], int tamanho, int pares[], int *tamanhoPar, int impares[], int *tamanhoImpar)
{
	int i, j=0, k=0;
	
	for(i=0;i<tamanho;i++)
	{
		
		if(vetor[i] % 2==0)
		{
			pares[j] = vetor[i];
			j++;
			
		}
		else
		{
			impares[k] = vetor[i];
			k++;
		}
		
	}
	
	*tamanhoPar = j;
	*tamanhoImpar = k;
	

}
void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void main()
{
	int  vet[6]={1,2,3,4,5,6}, vPares[TAM], vImpares[TAM],  quantPar, quantImpar;
	
	exibir (vet, 6);
	
	funcaoSeparaImparPar(vet, 6, vPares, &quantPar, vImpares, &quantImpar);
	
	printf("Vetor dos pares: ");
	
	exibir (vPares, quantPar);
	
	printf("Vetor dos Impares: ");
	
	exibir (vImpares, quantImpar);
	
}
