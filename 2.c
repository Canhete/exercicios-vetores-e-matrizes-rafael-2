/* 2) Crie uma função chamada mediaVetor que recebe um vetor de float e seu tamanho, e
retorna a média dos elementos.
Use a função em um programa que leia 5 notas. */

#include <stdio.h>

float mediaVetor(float vetor[], int tamanho){
    float media;
    for(int i=0; i<tamanho; i++){
        media += vetor[i];
    }
    media /= tamanho;
    return media;
}

void montarVetor(float vetor[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Digite o vetor[%d]: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void main(){
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    montarVetor(vetor, tamanho);

    float media = mediaVetor(vetor, tamanho);

    printf("Média dos elementos: %.2f\n", media);
}