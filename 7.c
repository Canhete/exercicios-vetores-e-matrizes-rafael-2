/* 7) Seja o trecho de código abaixo, quais serão os valores de x, y e *p no comando printf? 

    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    printf("x=%d    y=%d    *p=%d", x, y, *p);

*/
/* Resposta: 
    No começo há a declaração das variáveis. Logo em seguida há atribuição dos valores.
    y = 0; p = &y e x = *p
    Como p aponta para o enderenço de memória de y e x recebou o valor do espaço de memória apontado por p, x = 0, que é o valor de y.
    x = 4, aqui o valor de y é sobrescrito para ser 4 e não mais 0.
    (*p)++; essa linha indica que é para aumentar o valor do espaço de memória para o qual p aponta em mais 1, ficando *p = 1;
    --x; indica para diminiuir o valor da variável x em -1, ficando x = 3;
    (*p) += x; é o equivalente a *p = *p + x; portanto *p é atualizado para somar a mais o valor de x, ficando *p = 1 + 3 => *p = 4;
    No final o printf deve imprimir os seguintes valores:
        x = 3;  y = 4;   *p = 4;
*/