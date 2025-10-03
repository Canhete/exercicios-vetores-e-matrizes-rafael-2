/* 4) Escreva uma função recursiva que retorna a soma dos números de 1 até n.
Exemplo: somaAteN(4) → 1 + 2 + 3 + 4 = 10 */

#include <stdio.h>

// Função recursiva de soma
int somaAteN(int n){
    if(n==1){   // Caso base S(1) = 1
        return 1;
    }
    return n + somaAteN(n-1);   // Chamada recursiva
}

void main(){
    int x;

    printf("Digite um número para somar até: ");
    scanf("%d", &x);

    int soma = somaAteN(x);

    printf("Soma(%d) = %d\n", x, soma);
}