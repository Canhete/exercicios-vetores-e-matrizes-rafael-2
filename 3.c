/* 3) Implemente uma função que receba como parâmetro um vetor de inteiros e retorne a quantidade
de números pares contidos nele. */

#include <stdio.h>

int tamanho;

int obterParesVetor(int vetor[]){
    int pares = 0;
    for(int i=0; i<tamanho; i++){
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int montarVetor(int vetor[]){
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

    int par = obterParesVetor(vetor);

    printf("Quantidade de pares nesse vetor: %d\n", par);
}