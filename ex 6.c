#include <stdio.h>

void funcaoTrocaValorporOutro(int vet[], int tamanho, int a, int b)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if(vet[i]==a)
		{
			vet[i]=b;
		}
	}
		
}
void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	printf("Elementos do vetor: ");
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void main()
{
	
	int vetor[6]={1,2,3,5,5,6}, num1, num2;
	
	
	 exibir (vetor, 6);
	 
	 printf("Digite que valor quer trocar ");
	 scanf("%d", &num1);
	
	 printf("Digite q valor quer q insira: ");
	 scanf("%d", &num2);
	
	 funcaoTrocaValorporOutro(vetor, 6, num1, num2);
	 
	printf("Vetor apos troca: ");
	 exibir(vetor, 6);
	
}
