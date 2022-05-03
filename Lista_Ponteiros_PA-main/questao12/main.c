#include <stdio.h>


//Assim como existem ponteiros para area de dados, existem ponteiros para funções;
// Ponteiros  para funções guardam endereço de areas de código.
// Exemplo de ponteiro para função

int funcaoDobro(int x){
    return x*2;
}
int main(void)
{
    int (*pf)(int) = funcaoDobro;
    printf("Valor dobrado = %d", pf(3));
    return 0;
}
