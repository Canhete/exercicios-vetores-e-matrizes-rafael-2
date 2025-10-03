/* 13) Escreva um programa que contenha duas variaveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteudo do maior endereço. */

#include <stdio.h>

void main(){
    // Declaração das variáveis
    int a, b;
    
    // Leitura das variáveis apartir do teclado
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Uso de ponteiros para armazenar o endereço de memória delas
    int *p1 = &a;
    int *p2 = &b;

    // Comparação para ver qual endereço de memória é maior
    if(p1 > p2){
        printf("a tem o maior endereço!\n");
        printf("%p > %p\n", p1, p2);
    } else {
        printf("b tem o maior endereço!\n");
        printf("%p > %p\n", p2, p1);
    }
}