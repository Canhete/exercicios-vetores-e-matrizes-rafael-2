/* 11) Considerando o código abaixo, indique os valores de x, y e *p bem como a sua pilha de
execução:

void main() {
    int x, y, *p; y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
}

*/
/* Resposta: 
    Declara-se as variáveis x, y, com y = 0, bem como um ponteiro *p;
    *p recebe o endereço de memória de y;
    x recebe o espaço de memória apontado por *p, no caso como *p aponta para y,
    x = 0;
    x é sobrescrevido com o valor de 4,
    x = 4;
    O valor apontado por *p é incrementado em +1, como *p ainda aponta para y, o valor de y é alterado indiretamente, y = 0 + 1 => y = 1;
    Diminui-se o valor de x em -1, x = 4 - 1 => x = 3;
    Por último o espaço de memória de *p é atualizado para receber o próprio valor de *p + o valor de x (*p = *p + x),
    Como o valor apontado por *p é y, e y = 1 e o valor x no momento é x = 3, temos:
    *p = *p + x;
    *p = 1 + 3;
    *p = 4;
    Mas ao atualizar o valor do espaço de memória apontado por *p, atualiza-se também y, então:
    y = 4;
    Portanto os valores finais das variáveis ficam:
        x = 3;  y = 4;  *p = 4;
*/