/* 6) Crie uma função recursiva que busca um número dentro de um vetor e retorna a posição em que
ele aparece (ou -1 se não encontrado). */

#include <stdio.h>

int tamanho;

int procurarNum(int *vetor, int n, int pos){
    pos++;
    if(*vetor != n){
        return -1;
    }
    if(*vetor == n){
        pos = ;
        return 0;
    }
    return -1; 
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

    int numero;
    printf("Digite um número para procurar nesse vetor: ");
    scanf("%d", &numero);

    int par = obterParesVetor(vetor);

    printf("Quantidade de pares nesse vetor: %d\n", par);
}