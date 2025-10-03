/* 12) Observe o seguinte trecho de Código e indique o valor de cada variável em cada linha:

07.     a = 4;
08.     b = 3;
09.     p1 = &a;
10.     p2 = p1;
11.     *p2 = *p1 + 3;
12.     b = b * (*p1);
13.     (*p2)++;
14.     p1 = &b;

*/
/*
    Resposta:
    Considerando que a, b são do tipo inteiros e p1 e p2 são do tipo ponteiros para inteiros, por causa dos valores atribuídos à eles.
    07. a tem o valor de 4.
    08. b tem o valor de 3.
    09. o ponteiro p1 recebe o endereço de &a, *p1 tem o valor 4.
    10. o ponteiro p2 recebe o endereço do ponteiro p1, como aponta para o espaço de memória dele, *p2 tem o valor de 4.
    11. o valor de *p2 é atualizado para receber o valor de *p1 + 3, como *p1 aponta para a, e a = 4, temos:
        *p2 = 4 + 3 => *p2 = 7;
    Mas como *p2 aponta para *p1 que aponta para a, todos os valores dessas variáveis também são atualizados ficando:
        *p2 = 7, *p1 = 7, a = 7;
    12. o valor de b é atualizado, b recebe b multiplicado pelo espaço de memória apontado por p1. Como *p1 ainda aponta para a, *p1 = 7, e o valor de b é igual a 3, temos:
        b = 3 * 7 = > b = 21;
    13. incrementa-se o valor apontado por p2 em +1, p2 aponta para p1 que aponta para a, logo os valores de todas essas variáveis serão alterados:
        *p2 = *p2 + 1 => *p2 = 7 + 1 => *p2 = 8;
        como p2 -> p1 -> a;
        *p2 = 8,    *p1 = 8,    a = 8;
    14. por último atualiza o endereço de memória que o ponteiro p2 aponta, agora ele recebe o endereço de memória de b;
    isso atualiza o valor *p2 e novamente por consequência, os valores de *p1 e a;
        p2 = &b;
        como b = 21, *p2 = 21;
        p2 -> p1 -> a
        *p2 = 21,   *p1 = 21,   a = 21,
    No fim todas as variáveis usadas ficam com o valor de 21.
*/