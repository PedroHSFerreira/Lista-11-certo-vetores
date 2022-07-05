#include <stdio.h>


void funcaoTrocaValores(int vet[], int tamanho)
{
	int i, j, aux;
	
	
	for(i=0, j=1; i<tamanho, j<tamanho;i=i+2, j=j+2)
	{
		 trocaElementos(vet, i, j);
		
	}
	
	

}
 trocaElementos(int ve[], int a, int b)
{
	int aux;
	        
	     aux=ve[a];
		 ve[a]=ve[b];
		 ve[b] = aux;
	
}

void exibir(int v[], int tamanho)
{
	int i;
	
	printf("Elementos do vetor: ");
	
	for(i=0;i<tamanho;i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n\n");
	
}
void main()
{
	int vetor[6]={}, i;
	
	for(i=0;i<6;i++)
	{
		
	printf("Digite os 6 valores do vetor: ");
	scanf("%d", &vetor[i]);
	
	}
	
	printf("Vetor antes: ");
	
	 exibir(vetor, 6);
	 
	 printf("Vetor apos trocas: ");
	 
	 funcaoTrocaValores( vetor, 6);
	 
	 exibir(vetor, 6);
	
	
	
	
}
