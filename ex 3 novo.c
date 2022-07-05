#include <stdio.h>
#define TRUE 1
#define FALSE 0


int funcaoVerificarCescente(float vet[], int tamanho)
{
	
	int i, j;
	
	for(i=0, j=1 ;i<tamanho, j<tamanho ;i++, j++)
    {
    	if (vet[i]>vet[j])
    	{
    		return TRUE;
		}
    	
	}
	
	return FALSE;
	
	
	
	
}
void main()
{
	 float vetor[6]={};
	 int i;
	
	for(i=0;i<6;i++)
	{
		printf("Digite os 6 numeros do vetor: ");
		scanf("%f", &vetor[i]);
	}
	
	if(funcaoVerificarCescente(vetor, 6)==TRUE)
	{
		printf("O vetor esta ordenado crescente.");
	}
	else
	{
		printf("Vetor nao esta ordenado.");
	}
	
	
	
	
}
