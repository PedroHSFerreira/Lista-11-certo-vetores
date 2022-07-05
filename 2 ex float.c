#include <stdio.h>


void funcaoTrocas(float vet[], int tamanho)
{
    int i, j, aux;
    
    for(i=0, j=i+1; i<=tamanho, j<=tamanho; i+=2, j+=2)
    {
        
        aux = vet[i];
        
        vet[i]= vet[j];
        
        vet[j]=aux;
    }
    
    
}

 void exibir(float vet[], int tamanho)
{
    int i;
    
    printf("Elementos do vetor: ");
    
    for(i=0;i<=tamanho-1;i++)
    {
        printf("%.2f ", vet[i]);
    }
    
    printf("\n\n");
}

void main()
{
    
    float vetor[6]={1.0 ,2.0 ,3.0 ,4.0 ,5.0 ,6.0};
    
    printf("Vetor antes: ");
    exibir(vetor, 6);
    
    funcaoTrocas(vetor, 6);
    printf("Vetor depois da troca: ");
    exibir( vetor, 6);
}
