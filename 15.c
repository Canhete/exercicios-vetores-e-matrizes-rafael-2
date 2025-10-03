/* 15) Qual é a saída do programa abaixo e por que?

#include <stdio.h>

void increment() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main() {
    increment();
    increment();
    return 0;
}

*/
/*
    Resposta:
    Há um procedimento (ou função que retorna void) que descreve uma série de passos.
    Primeiro declara-se uma variável inteira estática count e atribui o valor 0 a ela. Como ela é estática, significa que ela só existe dentro da execução do arquivo em si. Mesmo que ela tenha sido declarada dentro da função, o static, a faz ter um tempo de duração superior e existir para todo arquivo ao invés de ser descartada assim que a função chega ao fim.
    A função faz o valor dessa variável ser incrementado em +1 e
    imprime na tela o valor atual de count;
    No programa principal main(), a função increment() é chamada duas vezes, realizando o procedimento duas vezes,
    imprimindo na tela toda vez que o valor de count é incrementado. A declaração não interfere no valor de count por conta que o atributo static, indicar que a declaração só é válida uma vez. Portanto o count incremento acumula toda vez que essa função é chamada, permitindo fazer uma contagem.
        Count: 1
        Count: 2
    No final o valor de count será 2, e o programa terminará com o código 0.
*/