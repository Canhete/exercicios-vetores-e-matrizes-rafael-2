/* 6) Crie uma função recursiva que busca um número dentro de um vetor e retorna a posição em que
ele aparece (ou -1 se não encontrado). */

#include <stdio.h>

int tamanho;    // Variável global de tamanho

int procurarNum(int *vetor, int n, int pos){
    if(pos >= tamanho){ // Se percorreu todo vetor e não achou, não tem o elemento
        return -1;
    }
    if(vetor[pos] == n){    // Se achar o valor na posição tal, retorna a posição
        return pos;
    }
    return procurarNum(vetor, n, pos+1);     // Chamada recursiva, avança uma posição
}

// Função que monta o vetor
int montarVetor(int *vetor){
    for(int i=0; i<tamanho; i++){
        printf("Digite o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    return *vetor;
}

void main(){
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    montarVetor(vetor);

    int numero;
    printf("Digite um número para procurar nesse vetor: ");
    scanf("%d", &numero);

    int posicao = procurarNum(vetor, numero, 0);

    if(posicao == -1){
        printf("Número %d não foi encontrado nesse vetor!\n", numero);
    } else {
        printf("Número %d encontrado na posição [%d] desse vetor!\n", numero, posicao);
    }
}