/* 16) Qual é a diferença entre uma variável global e uma variável local em C?

    a) Variáveis globais não podem ser modificadas após a declaração.
    b) Variáveis locais não têm um valor inicial definido.
    c) Variáveis locais só podem ser usadas dentro de funções.
    d) Variáveis globais podem ser acessadas e modificadas por qualquer função no
    programa.

    Resposta:
    Variáveis globais tem duração estática e pode sim ser utilizadas por qualquer função do programa e até mesmo outro arquivo que a referencie. Mostrando que sim, qualquer função acessar essa variável pode modificar seu valor.
    
    Quanto aos outros itens, todos estão falsos.

    As variáveis globais podem sim ser modificadas após a declaração, a não ser que tenham o tipo const, que indica uma constante, mas conceitualmente isso não seria mais uma variável global e sim uma constante global.

    Quando uma variável é declarada, sem ser inicializada, o valor dela é indeterminado até que um valor seja atribuido para ela. Portanto é impreciso afirmar que as variáveis locais tem um valor inicial definido.
    A não ser que se trate de uma variável local do tipo static que é inicializada por padrão com 0, no geral variáveis locais tem valor indeterminado, tornando isso falso.

    As variáveis locais são voltadas para serem usadas dentro do bloco ou função, não sendo visíveis para o escopo de fora.
    Mesmo assim, assim a afirmação é muito generalizada e vaga, e fácil de contradizer, pois existem as variáveis locais do tipo static, que se comportam diferente com relação à duração.

*/