/*
	FAETERJ-Rio
	Fundamentos de Algoritmos de Computa��o - FAC
	Turma B
	Data: 29/06/2022
	
	Fun��es (Lista de Exerc�cios XI)
	
	QUEST�O 09:
	Implementar a fun��o de inser��o de determinado elemento em um vetor ordenado
	crescentemente (dica: utilizar a fun��o do item 08 para auxiliar).
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define CAP 20

#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int questao09 (int vetor[], int capacidade, int *quantidade, int numero);

int questao08 (int vetor[], int quantidade, int x);
void exibir (int vetor[], int tamanho);
void preencherAleatorioCrescente (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vetor[CAP];
	int numero, pos, quant, resultado;
	
	//preenchendo o vetor com n�meros aleat�rios (em ordem crescente)
	quant = CAP-3;
	preencherAleatorioCrescente (vetor, quant);
		
	//exibindo o vetor
	exibir (vetor, quant);
	
	do
	{
		//lendo o valor a ser inserido
		printf ("\n\nEntre com o valor a ser inserido: ");
		scanf ("%d", &numero);
		
		//chamando a fun��o
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

//implementa��o das fun��es
int questao09 (int vetor[], int capacidade, int *quantidade, int numero)
{
	//declara��o de vari�veis
	int pos, i;
	
	//verificando se o vetor j� est� cheio
	if (*quantidade == capacidade)
	{
		return FALSE;
	}
	else
	{
		//chamando a fun��o de busca (quest�o 08)
		pos = questao08 (vetor, *quantidade, numero);
		
		//deslocando os elementos da posi��o 'pos' at� a �ltima (preenchida) uma posi��o para a direita
		for (i=*quantidade-1;i>=pos;i--)
		{
			vetor[i+1] = vetor[i];
		}
		
		//inserindo 'numero' na posi��o 'pos'
		vetor[pos] = numero;
		
		//atualizar a quantidade
		(*quantidade)++;
		
		return TRUE;
	}
}

int questao08 (int vetor[], int quantidade, int x)
{
	//declara��o de vari�veis
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
	
	//se chegou aqui, significa que 'x' � maior do que todos os elementos do vetor
	return quantidade;
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i;
	
	//garantindo que as sequ�ncias ser�o distintas a cada execu��o
	srand (time(NULL));

	//varrendo o vetor
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)	
	{
		vetor[i] = vetor[i-1] + rand ()%5;
	}	
}
