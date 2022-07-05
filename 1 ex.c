#include <stdio.h>

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

int funcaoIdentificar(int vet[], int tamanho, int valor)
{
	int i, cont=0;
	
	for(i=0;i<=5;i++)
	{
		
		if(vet[i]==valor)
		{
			cont++;
		}
		
	}
	
	return cont;
	
	
	
}

void main()
{
   int vetor[5]={}, i, num, resposta;
   
   
     for(i=0;i<=5-1;i++)
      {
   	     printf("Digite os valores do vetor:");
   	     scanf("%d", &vetor[i]);
       }
       
	 printf("Digite o numero para ver a quantidade de vezes q ele aparece no vetor: ");
	 scanf("%d", &num);
     
     resposta = funcaoIdentificar(vetor, 10, num);
     
     printf("O total de vezes que %d aparece no vetor: %d", num, resposta);
	
}
