/* 9) Seja o trecho de código abaixo, o uso do ponteiro está correto? Se sim, o que está sendo passado
como parâmetros para a função “swapValues”?

int main() {
    double a = 5.5;
    double b = 3.0;
    swapValues(&a, &b);
    return 0;
}

void swapValues(double *x, double *y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

*/
/* Resposta: 
    Sim está correto, a linguagem C não possui nativamente a passagem por referência, mas é possível simular um efeito parecido com o uso dos ponteiros.
    Como ponteiros no conceito são variáveis que armazenam endereço de memória, se colocarmor ponteiros como parâmetros numa função, quando se chama a função, ela deverá aceitar apenas endereços de memória como entrada.
    Ao realizar a aritmética com ponteiros dentro da função, o valor apontado pelo ponteiro se modifica indiretamente, permitindo que o valor de várias variáveis de entrada sejam alterados, mesmo que a função não retorne nada.
    Portanto é correto sim o uso de ponteiros para essa função que troca os valores de duas variáveis e o que está sendo passado como parâmetros são os endereços de memórias das variáveis que serão trocadas.
*/