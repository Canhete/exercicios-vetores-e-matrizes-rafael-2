/* 1) Escreva um programa que leia uma matriz 3x3 de números inteiros e exiba:
a) a matriz original
b) a soma dos elementos da diagonal principal
c) o maior valor da matriz e sua posição (linha e coluna) */

#include <stdio.h>
#include <stdlib.h>

const int tamanho = 3;

void lerMatriz(int *matriz){
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            printf("Digite M[%d][%d]: ", i+1, j+1);
            scanf("%d", (matriz + i * tamanho + j));
        }
    }
}

void exibirMatriz(int *matriz){
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            printf("%d\t", *(matriz + i * tamanho + j));
        }
        printf("\n");
    }
}

int somaDiag(int *matriz){
    int soma = 0;
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(i==j){
                soma += *(matriz + i * tamanho + j);
            }
        }
    }
    return soma;
}

int maiorValor(int *matriz, int *linhaMaior, int *colunaMaior){
    int maior = 0;
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            if(*(matriz + i * tamanho + j) > maior){
                maior = *(matriz + i * tamanho + j);
                *linhaMaior = i;
                *colunaMaior = j;
            }
        }
    }
    return maior;
}


void main(){
    int *matriz = (int*) malloc(tamanho * tamanho * sizeof(int));

    lerMatriz(matriz);
    
    printf("--- Matriz original ---\n");
    exibirMatriz(matriz);

    printf("--- Diagonal principal ---\n");
    int soma = somaDiag(matriz);
    
    printf("Soma da diagonal principal: %d\n", soma);

    printf("--- Maior Elemento ---\n");
    int linhaMaior, colunaMaior;
    int maior = maiorValor(matriz, &linhaMaior, &colunaMaior);
    printf("Maior elemento[%d][%d]: %d\n", linhaMaior, colunaMaior, maior);

    free(matriz);
}