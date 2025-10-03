/* 2) Crie uma função chamada mediaVetor que recebe um vetor de float e seu tamanho, e
retorna a média dos elementos.
Use a função em um programa que leia 5 notas. */

#include <stdio.h>

// Função mediaVetor
float mediaVetor(float *vetor, int tamanho){
    float media = 0;
    for(int i=0; i<tamanho; i++){
        media += vetor[i];
    }
    media /= tamanho;
    return media;
}

// Leitura das notas
void montarVetor(float *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Digite a nota N[%d]: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void main(){
    const int tamanho = 5; // Como são 5 notas, o tamanho do vetor será 5
    float vetor[tamanho];

    printf("--- Insira as notas ---\n");
    montarVetor(vetor, tamanho);

    float media = mediaVetor(vetor, tamanho);

    printf("Média final: %.2f\n", media);
}