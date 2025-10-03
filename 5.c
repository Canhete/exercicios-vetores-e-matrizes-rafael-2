/* 5) Escreva uma função recursiva que calcule o MDC de 2 valores de acordo com a lógica
euclidiana.
Exemplo: 
    MDC(4032, 1272) → 4032/1272 = 3 (resto 216)
    MDC(1272, 216) → 1272/216 = 5 (resto 192)
    MDC(216, 192) → 216/192 = 1 (resto 24)
    MDC(192, 24) → 192/24 = 8 (resto 0)
    MDC(24, 0) → 24
    logo, MDC(4032, 1272) é 24 
*/

#include <stdio.h>

long int MDC(long int a, long int b){
    if(b == 0){
        return a;
    }
    return MDC(b, a % b);   // Chamada recursiva
}

void main(){
    long int x, y;
    
    printf("--- Calculadora de MDC ---\n");
    printf("Digite um número: ");
    scanf("%ld", &x);

    printf("Digite outro número: ");
    scanf("%ld", &y);

    long int mdc = MDC(x, y);

    printf("------------------------\n");
    printf("> O MDC de %ld e %ld é %ld\n", x, y, mdc);
}