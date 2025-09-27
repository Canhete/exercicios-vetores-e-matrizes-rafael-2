/* 5) Escreva uma função recursiva que calcule o MDC de 2 valores de acordo com a lógica
euclidiana.
Exemplo: MDC(4032, 1272) → 4032/1272 = 3 (resto 216)
MDC(1272, 216) → 1272/216 = 5 (resto 192)
MDC(216, 192) → 216/192 = 1 (resto 24)
MDC(192, 24) → 192/24 = 8 (resto 0)
MDC(24, 0) → 24
logo, MDC(4032, 1272) é 24 */

#include <stdio.h>

int MDC(int a, int b){
    if(a % b == 0){
        return b;
    } else
    return (a % MDC(a, b-1));
}

void main(){
    int x, y;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite outro número: ");
    scanf("%d", &y);

    int mdc = MDC(x, y);

    printf("O MDC de %d e %d é %d\n", x, y, mdc);
}