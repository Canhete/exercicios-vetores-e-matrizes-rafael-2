/* 14) Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que
retorne a soma do dobro dos dois numeros lidos. A função deverá armazenar o dobro de A na
propria variável A e o dobro de B na própria variável B. */

#include <stdio.h>

// Função de soma dos dobros.
int somaDobro(int *a, int *b){
    *a *= 2;    // Dobro de a armazenado no próprio a
    *b *= 2;    // Dobro de b armazenado no próprio b
    int soma = *a + *b;     // Soma dos dobros
    return soma;    // Retorna  soma
}

void main(){
    int A, B;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Interface que mostra as operações com A e B ao usuário
    printf("%d * 2 = %d\n", A, A*2);
    printf("%d * 2 = %d\n", B, B*2);
    
    int SOMA = somaDobro(&A, &B);

    printf("%d + %d = %d\n", A, B, SOMA);
}