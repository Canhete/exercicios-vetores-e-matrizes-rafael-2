/* 4) Escreva uma função recursiva que retorna a soma dos números de 1 até n.
Exemplo: somaAteN(4) → 1 + 2 + 3 + 4 = 10 */

#include <stdio.h>

int somaAteN(int n){
    if(n==1){
        return 1;
    }
    return n + somaAteN(n-1);
}

void main(){
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    int soma = somaAteN(x);

    printf("Soma = %d\n", soma);
}