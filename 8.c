/* 8) Seja o trecho de código abaixo, que valor de c será impresso no comando printf?

    int a=5, b=12, c;
    int *p;
    int *q;
    p = &a;
    q = &b;
    c = *p + *q;
    printf("c = %d", c);

*/
/* Resposta: 
    Começa com a declaração e já atribuição de valores, exceto para c que só é declarado.
    a = 5; b = 12; c;
    Então declara-se dois ponteiros, o ponteiro p que recebe o endereço de memória de a e o ponteiro q que recebe o endereço de memória de b;
    p = &a; q = &b;
    Então executa-se uma operação: c recebe a soma dos valores apontados pelo ponteiro *p e *q;
    c = *p + *q;
    Como *p aponta para a, o valor apontado por ele é 5. *q aponta para b, então o valor apontado é 12;
    portanto c = 5 + 12 => c = 17;
    No final o printf deve imprimir:
        c = 17
*/