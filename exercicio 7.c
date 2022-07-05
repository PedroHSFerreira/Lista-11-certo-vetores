#include <stdio.h>
#define TAM 10
int funcaoRemover(int vetor[], int *tamanho, int numero)
{
	
	int i, pos, cont;
	
	for(i=0; i<*tamanho; i++)
	{
		if (vetor[i]==numero)
		{
			
			for(pos=i+1;pos<*tamanho;pos++)
			{
				vetor[pos-1]=vetor[pos];
			}
			(*tamanho)--;
			
			cont++;
			
		   	i--;
			
		}
	}
	return cont;
	
}
void exibir (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", v[i]);
	}
	
	printf ("\n\n");
}

void main()
{
	int vet[TAM]={1,2,3,4,4,4,6,7,8,9}, num, resposta, quant;
	
	quant = TAM;
	
	exibir(vet, quant);
	
	
	printf("Entre com o valor a ser removido:");
	scanf("%d", &num);
	
	
	resposta =  funcaoRemover(vet, &quant, num);
	
	exibir (vet, quant);
	
	printf("Foram realizadas %d remoçoes do valor %d", resposta, num);
	
}
