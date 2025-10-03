/* 3) Implemente uma função que receba como parâmetro um vetor de inteiros e retorne a quantidade
de números pares contidos nele. */

#include <stdio.h>

int tamanho; // Variável global de tamanho

// Função que retorna a quantidade pares, como a quantidade é um numero positivo, foi optado pelo unsigned int
unsigned int obterParesVetor(int *vetor){
    unsigned int pares = 0;
    for(int i=0; i<tamanho; i++){
        if(vetor[i] % 2 == 0){  // Um número par é aquele que divide 2 e não deixa restos de divisão
            pares++;
        }
    }
    return pares;
}

// Função que monta o vetor
int montarVetor(int *vetor){
    for(int i=0; i<tamanho; i++){
        printf("Digite o vetor[%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void main(){
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    montarVetor(vetor);

    unsigned int par = obterParesVetor(vetor);

    printf("Quantidade de números pares nesse vetor: %u\n", par);
}