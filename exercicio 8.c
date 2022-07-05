 #include <stdio.h>
#define TAM 5
int funcaoRetornarPosicao(int vetor[], int tamanho, int num)
{
	
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if (vetor[i]==num)
		{
			return i;
		}
		else
		{
			if(vetor[i]>num)
			{
				return i;
			}
		}
	}
	
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
		vetor[i] = vetor[i-1] + rand ()%5;
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
	int vet[TAM], num, resposta, valor;
	
	
	 preencherAleatorioCrescente (vet, TAM);
	
	
	 exibir (vet, TAM);
	
	printf("Entre com o valor a ser buscado, para saber qual sua posicao ou onde ele deveria estar.");
	scanf("%d", &valor);
	
	resposta = funcaoRetornarPosicao(vet, TAM, valor);
	
	printf("O valor esta ou deveria estar na posicao: %d", resposta);
	
}
