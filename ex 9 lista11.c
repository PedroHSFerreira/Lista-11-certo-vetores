/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computação - FAC
	Turma B
	Data: 29/06/2022
	
	Funções (Lista de Exercícios XI)
	
	QUESTÃO 09:
	Implementar a função de inserção de determinado elemento em um vetor ordenado
	crescentemente (dica: utilizar a função do item 08 para auxiliar).
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define CAP 20

#define TRUE 1
#define FALSE 0

//protótipos das funções
int questao09 (int vetor[], int capacidade, int *quantidade, int numero);

int questao08 (int vetor[], int quantidade, int x);
void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vetor[CAP];
	int numero, pos, quant, resultado;
	
	//preenchendo o vetor com números aleatórios (em ordem crescente)
	quant = CAP-3;
	preencherAleatorioCrescente (vetor, quant);
		
	//exibindo o vetor
	exibir (vetor, quant);
	
	do
	{
		//lendo o valor a ser inserido
		printf ("\n\nEntre com o valor a ser inserido: ");
		scanf ("%d", &numero);
		
		//chamando a função
		resultado = questao09 (vetor, CAP, &quant, numero);
		
		if (resultado == TRUE)
		{
			//exibindo o vetor
			exibir (vetor, quant);
		}
		else
		{
			printf ("\n\nVetor cheio!");
		}
	}
	while (resultado == TRUE);
}

//implementação das funções
int questao09 (int vetor[], int capacidade, int *quantidade, int numero)
{
	//declaração de variáveis
	int pos, i;
	
	//verificando se o vetor já está cheio
	if (*quantidade == capacidade)
	{
		return FALSE;
	}
	else
	{
		//chamando a função de busca (questão 08)
		pos = questao08 (vetor, *quantidade, numero);
		
		//deslocando os elementos da posição 'pos' até a última (preenchida) uma posição para a direita
		for (i=*quantidade-1;i>=pos;i--)
		{
			vetor[i+1] = vetor[i];
		}
		
		//inserindo 'numero' na posição 'pos'
		vetor[pos] = numero;
		
		//atualizar a quantidade
		(*quantidade)++;
		
		return TRUE;
	}
}

int questao08 (int vetor[], int quantidade, int x)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		/*//verificando se o elemento foi encontrado
		if (vetor[i] == x)
		{
			return i;
		}
		else
		{
			//verificando se um elemento maior do que x foi encontrado
			if (vetor[i] > x)
			{
				return i;
			}
		}*/
		
		if (vetor[i] >= x)
		{
			return i;
		}
	}
	
	//se chegou aqui, significa que 'x' é maior do que todos os elementos do vetor
	return quantidade;
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
		vetor[i] = vetor[i-1] + rand ()%5;
	}	
}
