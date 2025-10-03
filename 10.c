/* 10) Após a execução do Código abaixo, qual é o valor da variável “num”?

int main() {
    int num = 42;
    int *ptr1 = &num;
    int *ptr2 = ptr1;
    *ptr2 = 99;
    return 0;
}

*/
/* Resposta: 
   Primeiramente há a declaração e atribuição de valor para a variável num.
   num = 42;
   Depois, faz-se o mesmo com dois ponteiros, *ptr1 recebe o endereço de memória de num,
   *ptr2 recebe o endereço de memória do ponteiro ptr1,
   Então atribui-se um valor para o espaço de memória que *ptr2 está apontando,
   seguindo a lógica dos ponteiros, tem-se a seguinte ordem,
   as setas indicam quem está apontando para quem:
        *ptr2 -> *ptr1 -> num;
    O valor para o qual ptr2 aponta foi sobrescrevido com 99,
    como ptr1 aponta para ptr2, outro ponteiro, o valor para qual ptr2 aponta também foi
    sobrescrevido, no caso num.
    Então indiretamente o valor de num foi alterado para 99.
        num = 99;
*/